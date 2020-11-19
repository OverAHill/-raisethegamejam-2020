// Fill out your copyright notice in the Description page of Project Settings.
#include "AgentCharacter.h"
#include "AgentController.h"
#include "RunFromKillerAgentTask.h"
#include "../TimeRewind.h"
#include "Kismet/GameplayStatics.h"
#include "../RaiseTheGameJame2020Character.h"

// Sets default values
AAgentCharacter::AAgentCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TaskManager = CreateDefaultSubobject<UAgentTaskManager>(TEXT("Agent Task Manager"));

	mTimeRewind = new TimeRewind(this);
}

// Called when the game starts or when spawned
void AAgentCharacter::BeginPlay()
{
	Super::BeginPlay();
	//TaskManager = CreateDefaultSubobject<UAgentTaskManager>(TEXT("Agent Task Manager"));
	
	PointerPosForPathfinding = FVector(0, 0, 0);

	// Create our Agent Controller and give it control of the player.
	TaskManager->SetupTaskManager(AIType, this, actionLocations, &PointerPosForPathfinding);
}

// Called every frame
void AAgentCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (PointerPosForPathfinding != FVector(0, 0, 0))
		PathfindToLocation(PointerPosForPathfinding);


	ARaiseTheGameJame2020Character* character = dynamic_cast<ARaiseTheGameJame2020Character*>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	static float timer = 0;

	if (character->Rewinding)
	{
		mTimeRewind->Rewind(DeltaTime);
	}
	else
	{
		timer += DeltaTime;

		if (timer > mTimeRewind->GetSpacing())
		{
			mTimeRewind->AddTimeNode();
			timer = 0;
		}
	}
}

// Called to bind functionality to input
void AAgentCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AAgentCharacter::SignalWitnessedDeath(AActor* killerReference)
{
	if (TaskManager != nullptr)
	{
		TaskManager->ForceTaskToFront(new RunFromKillerAgentTask(this, &PointerPosForPathfinding, killerReference));
	}
}