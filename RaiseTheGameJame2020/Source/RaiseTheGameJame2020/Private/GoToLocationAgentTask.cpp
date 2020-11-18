// Fill out your copyright notice in the Description page of Project Settings.


#include "GoToLocationAgentTask.h"

GoToLocationAgentTask::GoToLocationAgentTask(AActor* parent, FVector goalLocation)
{
	Parent = parent;
	GoalLocation = goalLocation;
}

GoToLocationAgentTask::~GoToLocationAgentTask()
{

}

bool GoToLocationAgentTask::CanRun()
{
	IAgentTask::CanRun();

	if (IsAtTargetLocation())
	{
		return false;
	}

	if (completed)
	{
		return false;
	}

	return true;
}

void GoToLocationAgentTask::Run(float DeltaTime)
{
	IAgentTask::Run(DeltaTime);

	FVector direction = GoalLocation - Parent->GetActorLocation();

	direction.Normalize();

	Parent->SetActorLocation(Parent->GetActorLocation() + (direction * 100 * DeltaTime));
}

bool GoToLocationAgentTask::IsFinished()
{
	return IAgentTask::IsFinished();;
}

bool GoToLocationAgentTask::IsAtTargetLocation()
{
	FVector direction = GoalLocation - Parent->GetActorLocation();

	// If we're too far return false
	if (direction.Size() > 10)
	{
		return false;
	}

	return true;
}