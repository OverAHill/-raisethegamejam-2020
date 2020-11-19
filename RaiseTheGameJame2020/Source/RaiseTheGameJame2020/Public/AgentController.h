// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AgentController.generated.h"

/**
 * 
 */
UCLASS()
class RAISETHEGAMEJAME2020_API AAgentController : public AAIController
{
	GENERATED_BODY()

private:
	FVector GoalLocation;
	float MovementSpeed;

public:
	void Tick(float DeltaTime);
	void SetGoalLocationAndMovementSpeed(FVector goalLocation, float movementSpeed);
};
