// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IAgentTask.h"
/**
 * 
 */
class RAISETHEGAMEJAME2020_API GoToRandomLocationAgentTask : public IAgentTask
{
protected:
	ACharacter* Parent;
	bool initialised = false;
	FVector GoalLocation = FVector(0, 0, 0);
	float TimeToRegen;
	float TimeSinceStart;

	bool IsAtTargetLocation();

public:
	GoToRandomLocationAgentTask(ACharacter* parent);
	~GoToRandomLocationAgentTask();

	virtual bool CanRun();
	virtual void Run(float DeltaTime);
	virtual bool IsFinished();
};
