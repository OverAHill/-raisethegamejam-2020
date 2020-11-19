// Fill out your copyright notice in the Description page of Project Settings.


#include "AgentController.h"

void AAgentController::Tick(float DeltaTime)
{
	MoveToLocation(GoalLocation, -1.0, true, true, false, true);
}

void AAgentController::SetGoalLocationAndMovementSpeed(FVector goalLocation, float movementSpeed)
{
	GoalLocation = goalLocation;
	MovementSpeed = movementSpeed;
}