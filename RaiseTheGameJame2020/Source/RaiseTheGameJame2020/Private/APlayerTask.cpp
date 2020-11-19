// Fill out your copyright notice in the Description page of Project Settings.


#include "APlayerTask.h"
#include "Components/BoxComponent.h" 

// Sets default values
AAPlayerTask::AAPlayerTask()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bIsCompleted = false;
	bIsActive = false;

	TaskRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
	RootComponent = TaskRootComponent;

	TaskEntry = CreateDefaultSubobject<UBoxComponent>(TEXT("Task Zone Entry Collider"));
	TaskEntry->SetupAttachment(GetRootComponent());
	TaskEntry->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(0.0f, 0.0f, 0.0f));
	TaskEntry->OnComponentBeginOverlap.AddDynamic(this, &AAPlayerTask::OnTaskEntryOverlapBegin);
	TaskEntry->OnComponentEndOverlap.AddDynamic(this, &AAPlayerTask::OnTaskEntryOverlapEnd);

	TaskExit = CreateDefaultSubobject<UBoxComponent>(TEXT("Task Zone Exit Collider"));
	TaskExit->SetupAttachment(GetRootComponent());
	TaskExit->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(0.0f, 0.0f, 0.0f));
	TaskExit->OnComponentBeginOverlap.AddDynamic(this, &AAPlayerTask::OnTaskExitOverlapBegin);
	TaskExit->OnComponentEndOverlap.AddDynamic(this, &AAPlayerTask::OnTaskExitOverlapEnd);

	TaskArea = CreateDefaultSubobject<UBoxComponent>(TEXT("Task Zone Area Collider"));
	TaskArea->SetupAttachment(GetRootComponent());
	TaskArea->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(0.0f, 0.0f, 0.0f));
}

// Called when the game starts or when spawned
void AAPlayerTask::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AAPlayerTask::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FString s;
	FString isAct = GetIsActive() ? "true" : "false";
	FString isComp = GetIsCompleted() ? "true" : "false";

	s = "Active: " + isAct + ", Completed: " + isComp;
	
	GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, FColor::Red, s);

	if (GetIsCompleted() == false && GetIsActive() == true)
	{
		int kills = 0;

		for (ATargetActor* actor : TargetActors)
		{
			if (actor->GetIsAlive() == false)
				kills++;
		}

		if (kills == TargetActors.Num())
		{
			SetIsCompleted(true);
		}


		s = "Killed: " + kills + '/' + TargetActors.Num();
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, FColor::Red, s);
	}
}

void AAPlayerTask::SetIsActive(bool state)
{
	bIsActive = state;
}

bool AAPlayerTask::GetIsActive()
{
	return bIsActive;
}

void AAPlayerTask::SetIsCompleted(bool state)
{
	bIsCompleted = state;
}

bool AAPlayerTask::GetIsCompleted()
{
	return bIsCompleted;
}

void AAPlayerTask::OnTaskEntryOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, FColor::Red, TEXT("OnTaskEntryOverlapBegin"));
}

void AAPlayerTask::OnTaskEntryOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	SetIsActive(true);
	GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, FColor::Red, TEXT("OnTaskEntryOverlapEnd"));
}

void AAPlayerTask::OnTaskExitOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	SetIsActive(false);
	GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, FColor::Red, TEXT("OnTaskExitOverlapBegin"));
}

void AAPlayerTask::OnTaskExitOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.f, FColor::Red, TEXT("OnTaskExitOverlapEnd"));
}