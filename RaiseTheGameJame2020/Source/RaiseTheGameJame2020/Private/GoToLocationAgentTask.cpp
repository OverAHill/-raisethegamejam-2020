// Fill out your copyright notice in the Description page of Project Settings.


#include "GoToLocationAgentTask.h"
#include "AgentCharacter.h"

GoToLocationAgentTask::GoToLocationAgentTask(ACharacter* parent, FVector goalLocation, FVector* pointerPosForPathfinding)
{
	Parent = parent;
	GoalLocation = goalLocation;
	PointerPosForPathfinding = pointerPosForPathfinding;
	IsRunning = false;
}

GoToLocationAgentTask::~GoToLocationAgentTask()
{

}

bool GoToLocationAgentTask::CanRun()
{
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

	AAgentCharacter* character = (AAgentCharacter*)Parent;

	bool isPathable = false;
	character->IsLocationPathable(GoalLocation);
	if (character->CanPathToLocation)
		*PointerPosForPathfinding = GoalLocation;
	else
		completed = true;
}

bool GoToLocationAgentTask::IsFinished()
{
	return IAgentTask::IsFinished();
}

bool GoToLocationAgentTask::IsAtTargetLocation()
{
	FVector direction = GoalLocation - Parent->GetActorLocation();

	// If we're too far return false
	if (direction.Size() > 50)
	{
		return false;
	}

	completed = true;
	return true;
}