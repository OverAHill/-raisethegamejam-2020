// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IAgentTask.h"
/**
 * 
 */
class RAISETHEGAMEJAME2020_API RunFromKillerAgentTask : public IAgentTask
{
private:
	AActor* ParentReference;
	AActor* KillerReference;

	bool CanSeeKiller();
	FVector GetDirectionToKiller();
	float GetDistanceToKiller();

public:
	RunFromKillerAgentTask(AActor* parentReference, AActor* killerReference);
	~RunFromKillerAgentTask();

	virtual bool CanRun();
	virtual void Run(float DeltaTime);
	virtual bool IsFinished();
};