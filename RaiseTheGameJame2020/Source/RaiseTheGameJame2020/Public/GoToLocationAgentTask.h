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
	AActor* Parent;
	FVector GoalLocation;
	bool IsAtTargetLocation();

public:
	GoToLocationAgentTask(AActor* parent, FVector goalLocation);
	~GoToLocationAgentTask();

	virtual bool CanRun();
	virtual void Run(float DeltaTime);
	virtual bool IsFinished();
};
