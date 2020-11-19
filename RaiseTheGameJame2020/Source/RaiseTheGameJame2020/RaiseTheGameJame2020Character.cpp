// Copyright Epic Games, Inc. All Rights Reserved.

#include "RaiseTheGameJame2020Character.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

#include "TimeRewind.h"
#include "Public/HealthComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "APlayerTask.h"
#include <Runtime/Engine/Classes/Kismet/GameplayStatics.h>
#include <Runtime/Engine/Public/DrawDebugHelpers.h>

//////////////////////////////////////////////////////////////////////////
// ARaiseTheGameJame2020Character

ARaiseTheGameJame2020Character::ARaiseTheGameJame2020Character()
{
	PrimaryActorTick.bCanEverTick = true;

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
	GetCharacterMovement()->JumpZVelocity = 600.f;
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

	// Setup bloodlust variables
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
	//bToggleBloodlust = true;
	CurrentBloodlust = 0.0f;
	MaxBloodlust = 100.0f;
	IncreaseBloodlust = 1.0f; 
	DecreaseBloodlust = 15.0f; 


	mHealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("PlayerHealth"));
	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

	mTimeRewind = new TimeRewind(this);
	Rewinding = false;
	RewindParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MyRewindParticleSystem"));

	// New Attack and Grab Component Set Up

	//Sphere collider for detecting general area around the player
	GrabSphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collider"));
	GrabSphereCollider->InitSphereRadius(GrabSphereRadius);
	GrabSphereCollider->SetupAttachment(RootComponent);
	GrabSphereCollider->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	GrabSphereCollider->SetCollisionProfileName("Attack Radius");
	GrabSphereCollider->OnComponentBeginOverlap.AddDynamic(this, &ARaiseTheGameJame2020Character::OnGrabSphereBeginOverlap);
	GrabSphereCollider->OnComponentEndOverlap.AddDynamic(this, &ARaiseTheGameJame2020Character::OnGrabSphereEndOverlap);

	//Box (rectangle) collider to simulate the players view and to help determin the target
	// TO DO: Set location and size of box so it extends in front of the player
	ViewBoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("View Collider"));
	ViewBoxCollider->InitBoxExtent(ViewBoxHalfSize); // half the size of the box: x, y, z //change me
	
	ViewBoxCollider->SetupAttachment(RootComponent);
	ViewBoxCollider->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	ViewBoxCollider->SetCollisionProfileName("View Box");
	ViewBoxCollider->OnComponentBeginOverlap.AddDynamic(this, &ARaiseTheGameJame2020Character::OnViewBoxBeginOverlap);
	ViewBoxCollider->OnComponentEndOverlap.AddDynamic(this, &ARaiseTheGameJame2020Character::OnViewBoxEndOverlap);


	GrabComp = CreateDefaultSubobject<UGrabComponent>(TEXT("PlayerGrab"));
	AttackComp = CreateDefaultSubobject<UPlayerAttackComponent>(TEXT("PlayerAttack"));
}

void ARaiseTheGameJame2020Character::BeginPlay()
{
	Super::BeginPlay();
	GetAllTasks();
}

void ARaiseTheGameJame2020Character::AUpdate(float deltaSeconds)
{
	DeltaTime = deltaSeconds;
	//Super::Tick(DeltaTime);
	
	CurrentBloodlust += DeltaTime; //increases bloodlust - subject to change :) 


    if(bToggleBloodlustOn)
    {
	    //If the player hasn't killed and their bloodlust has reached max then they DIE
		CurrentBloodlust += IncreaseBloodlust * DeltaTime; //increases bloodlust - subject to change :) 
		float nearest = roundf(CurrentBloodlust * 100) / 100; // sets debug text to only display to two decimal places
		FString bloodlustDebug = FString::SanitizeFloat(nearest); // converts float to string

		//GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Red, TEXT("Bloodlust: " + bloodlustDebug));
		//GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Red, TEXT("Bool: " + bPlayerKilled ? TEXT("true") : TEXT("false")));
       // GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Red, TEXT(" Bool: " + bPlayerAttacked ? TEXT("true") : TEXT("false")));
       // FString s = bPlayerAttacked ? "true" : "false";
       // FString out = "Bool: " + s;

		//If the player hasn't killed and their bloodlust has reached max then they DIE
		if (CurrentBloodlust >= MaxBloodlust)
		{
			//die
			Destroy();
		}

		if (bPlayerAttacked == true /*CurrentTarget->FindComponentByClass<UHealthComponent>()->Alive = false;*/)
	    {
	    	CurrentBloodlust = CurrentBloodlust - DecreaseBloodlust;
	    	bPlayerAttacked = false;
	   	}
    }

	static float timer = 0;

	if (Rewinding && Controller)
	{
		Rewinding = !mTimeRewind->Rewind(DeltaTime);
    }
	else
	{
		RewindParticleSystem->Deactivate();
		timer += DeltaTime;

		if (timer > mTimeRewind->GetSpacing() && Controller)
		{
			mTimeRewind->AddTimeNode();
			timer = 0;
		}
	}
}

void ARaiseTheGameJame2020Character::GetAllTasks()
{
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetActor::StaticClass(), FoundActors);
}

//////////////////////////////////////////////////////////////////////////
// Input

void ARaiseTheGameJame2020Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	//PlayerInputComponent->BindAction("Test", IE_Pressed,  this, &ARaiseTheGameJame2020Character::PlayerKilled);

	PlayerInputComponent->BindAxis("MoveForward", this, &ARaiseTheGameJame2020Character::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ARaiseTheGameJame2020Character::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ARaiseTheGameJame2020Character::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ARaiseTheGameJame2020Character::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ARaiseTheGameJame2020Character::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ARaiseTheGameJame2020Character::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ARaiseTheGameJame2020Character::OnResetVR);

	PlayerInputComponent->BindAction("Rewind", IE_Pressed, this, &ARaiseTheGameJame2020Character::Rewind);

	// New Ang Input For Attacking and Grabbing
	PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &ARaiseTheGameJame2020Character::AttackTarget);
	PlayerInputComponent->BindAction("Grab", IE_Pressed, this, &ARaiseTheGameJame2020Character::AttemptGrab);

}

//Just testing for when the player kills if it resets their bloodlust or not. 
/* void ARaiseTheGameJame2020Character::PlayerKilled()
{
    bPlayerKilled = true;
} */

//TODO::FINISH THIS 
float ARaiseTheGameJame2020Character::AGetHealth()
{
	return mHealthComponent->HealthValue;
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

void ARaiseTheGameJame2020Character::Rewind()
{
	RewindParticleSystem->Activate();
	Rewinding = true;
}


// new Attack, Grab, Release Functions

void ARaiseTheGameJame2020Character::AttackTarget()
{
	//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "Attack");

	AttackComp->AttackTarget();
	bPlayerAttacked = true;
}


void ARaiseTheGameJame2020Character::AttemptGrab()
{
	//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "Attempt Grab");

	if (GrabComp->CurrentlyDragging)
	{
		ReleaseTarget();
	}
	else
	{
		GrabTarget();
	}
}

void ARaiseTheGameJame2020Character::GrabTarget()
{
	//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "Grab");

	GrabComp->GrabGTarget();
}


void ARaiseTheGameJame2020Character::ReleaseTarget()
{
	//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "Release Grab");

	GrabComp->ReleaseGTarget();
}

void ARaiseTheGameJame2020Character::OnViewBoxBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AAgentCharacter* Enemy = Cast<AAgentCharacter>(OtherActor);

	if (Enemy)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "Enemy Detected");
		AttackComp->OnEnterView(OtherActor);
	}
	
}

void ARaiseTheGameJame2020Character::OnViewBoxEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	ATestActor* Enemy = Cast<ATestActor>(OtherActor);

	if (Enemy)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "EnemyLeft");
		AttackComp->OnLeaveView(OtherActor);
	}
}

void ARaiseTheGameJame2020Character::OnGrabSphereBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "Grab Overlap");

	GrabComp->OnEnterGrabZone(OtherActor);
}

void ARaiseTheGameJame2020Character::OnGrabSphereEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, "Grab Overlap end");

	GrabComp->OnLeaveGrabZone(OtherActor);
}

