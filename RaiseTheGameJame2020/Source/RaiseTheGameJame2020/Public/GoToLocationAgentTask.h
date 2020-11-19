// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IAgentTask.h"
/**
 * 
 */
class RAISETHEGAMEJAME2020_API GoToLocationAgentTask : public IAgentTask
{
private:
	ACharacter* Parent;
	FVector GoalLocation;
	FVector* PointerPosForPathfinding;
	bool IsRunning;
	bool IsAtTargetLocation();

public:
	GoToLocationAgentTask(ACharacter* parent, FVector goalLocation, FVector* pointerPosForPathfinding);
	~GoToLocationAgentTask();

	virtual bool CanRun();
	virtual void Run(float DeltaTime);
	virtual bool IsFinished();
};
