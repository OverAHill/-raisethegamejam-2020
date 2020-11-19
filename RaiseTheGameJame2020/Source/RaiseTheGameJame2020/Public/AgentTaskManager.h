// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Containers/Queue.h"
#include "IAgentTask.h"
#include "AgentController.h"
#include "AgentTaskManager.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RAISETHEGAMEJAME2020_API UAgentTaskManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAgentTaskManager();

protected:
	IAgentTask* CurrentTask = nullptr;
	TQueue<IAgentTask*> RemainingTasks;

	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void RunCurrentTask(float DeltaTime);
	bool IsRemainingTasksEmpty();
	void SetupTaskManager(FString AIType, ACharacter* parent, TArray<FVector> positions, FVector* pointerPosForPathfinding);
	void ForceTaskToFront(IAgentTask* taskToFront);
};
