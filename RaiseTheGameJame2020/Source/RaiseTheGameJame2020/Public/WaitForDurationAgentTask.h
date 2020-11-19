// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "IAgentTask.h"

/**
 * 
 */
class RAISETHEGAMEJAME2020_API WaitForDurationAgentTask : public IAgentTask
{
private:
	float DeltaToWait;
	float WaitedDelta;

public:
	WaitForDurationAgentTask(float deltaToWait);
	~WaitForDurationAgentTask();

	virtual bool CanRun();
	virtual void Run(float DeltaTime);
	virtual bool IsFinished();
};
