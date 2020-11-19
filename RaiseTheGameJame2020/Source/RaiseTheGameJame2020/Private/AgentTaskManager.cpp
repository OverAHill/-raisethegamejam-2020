// Fill out your copyright notice in the Description page of Project Settings.
#include "AgentTaskManager.h"
#include "GoToLocationAgentTask.h"

// Sets default values for this component's properties
UAgentTaskManager::UAgentTaskManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAgentTaskManager::BeginPlay()
{
	Super::BeginPlay();

	// ...

}

// Called every frame
void UAgentTaskManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	RunCurrentTask(DeltaTime);
}

void UAgentTaskManager::RunCurrentTask(float DeltaTime)
{
	if (CurrentTask != nullptr)
	{
		if (CurrentTask->IsFinished())
		{
			RemainingTasks.Dequeue(CurrentTask);
			RunCurrentTask(DeltaTime);
			return;
		}

		if (CurrentTask->CanRun())
		{
			CurrentTask->Run(DeltaTime);
		}
	}
}

bool UAgentTaskManager::IsRemainingTasksEmpty()
{
	return RemainingTasks.IsEmpty();
}

void UAgentTaskManager::SetupTaskManager(AActor* parent)
{
	RemainingTasks.Enqueue(new GoToLocationAgentTask(parent, FVector(0, 0, 130.277084)));
	RemainingTasks.Enqueue(new GoToLocationAgentTask(parent, FVector(1000, 0, 130.277084)));
	RemainingTasks.Enqueue(new GoToLocationAgentTask(parent, FVector(0, -1000, 130.277084)));
	RemainingTasks.Enqueue(new GoToLocationAgentTask(parent, FVector(0, 0, 130.277084)));
	RemainingTasks.Enqueue(new GoToLocationAgentTask(parent, FVector(1000, 0, 130.277084)));
	RemainingTasks.Enqueue(new GoToLocationAgentTask(parent, FVector(0, -1000, 130.277084)));
	RemainingTasks.Enqueue(new GoToLocationAgentTask(parent, FVector(0, 0, 130.277084)));
	RemainingTasks.Enqueue(new GoToLocationAgentTask(parent, FVector(1000, 0, 130.277084)));
	RemainingTasks.Enqueue(new GoToLocationAgentTask(parent, FVector(0, -1000, 130.277084)));

	RemainingTasks.Dequeue(CurrentTask);
}