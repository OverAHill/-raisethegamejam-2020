// Copyright Epic Games, Inc. All Rights Reserved.

#include "RaiseTheGameJame2020Character.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

//////////////////////////////////////////////////////////////////////////
// ARaiseTheGameJame2020Character

ARaiseTheGameJame2020Character::ARaiseTheGameJame2020Character()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 6000.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm


	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
	//bToggleBloodlust = true;

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

void ARaiseTheGameJame2020Character::AUpdate(float deltaSeconds)
{
	DeltaTime = deltaSeconds;
	//Super::Tick(DeltaTime);
	if(bToggleBloodlustOn)
	{
		Bloodlust += t * DeltaTime; //increases bloodlust - subject to change :) 
		float nearest = roundf(Bloodlust * 100) / 100;
		FString bloodlustDebug = FString::SanitizeFloat(nearest);

		GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Red, TEXT(" Bloodlust: " + bloodlustDebug));
		//GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Red, TEXT(" Bool: " + bPlayerKilled ? TEXT("true") : TEXT("false")));

		//If the player hasn't killed and their bloodlust has reached max then they DIE
		if (Bloodlust >= 50)
		{
			//die
			Destroy();
		}

		if (bPlayerKilled == true)
		{
			Bloodlust = Bloodlust / TestValue;
			bPlayerKilled = false;
		}
	}
}

/* float ARaiseTheGameJame2020Character::AGetBloodlustVal()
{
	return Bloodlust;
} */
//////////////////////////////////////////////////////////////////////////
// Input

void ARaiseTheGameJame2020Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed,  this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("Test", IE_Pressed,  this, &ARaiseTheGameJame2020Character::TestFunc);

	PlayerInputComponent->BindAxis("MoveForward", this, &ARaiseTheGameJame2020Character::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight",   this, &ARaiseTheGameJame2020Character::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn",       this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate",   this, &ARaiseTheGameJame2020Character::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp",     this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ARaiseTheGameJame2020Character::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed,  this, &ARaiseTheGameJame2020Character::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ARaiseTheGameJame2020Character::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ARaiseTheGameJame2020Character::OnResetVR);
}

//Just testing for when the player kills if it resets their bloodlust or not. 
void ARaiseTheGameJame2020Character::TestFunc()
{
	bPlayerKilled = true;
} 

void ARaiseTheGameJame2020Character::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ARaiseTheGameJame2020Character::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void ARaiseTheGameJame2020Character::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void ARaiseTheGameJame2020Character::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ARaiseTheGameJame2020Character::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ARaiseTheGameJame2020Character::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ARaiseTheGameJame2020Character::MoveRight(float Value)
{
	if ( (Controller != NULL) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}