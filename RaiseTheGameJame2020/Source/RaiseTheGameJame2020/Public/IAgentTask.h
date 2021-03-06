// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class RAISETHEGAMEJAME2020_API IAgentTask
{
private:
	int maxRetries;
	int retryCount;

protected:
	bool completed;
	void CheckForFailed();

public:
	bool Failed;

	IAgentTask();
	~IAgentTask();

	// Overwrite these for behavior in children.
	virtual bool CanRun();
	virtual void Run(float DeltaTime);
	virtual bool IsFinished();
};
