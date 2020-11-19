// Fill out your copyright notice in the Description page of Project Settings.


#include "GoToRandomLocationAgentTask.h"
#include "AgentCharacter.h"

GoToRandomLocationAgentTask::GoToRandomLocationAgentTask(ACharacter* parent)
{
	Parent = parent;
	completed = false;
	TimeToRegen = FMath::RandRange(2, 15);
	TimeSinceStart = 0;
}

GoToRandomLocationAgentTask::~GoToRandomLocationAgentTask()
{

}

bool GoToRandomLocationAgentTask::CanRun()
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

void GoToRandomLocationAgentTask::Run(float DeltaTime)
{
	AAgentCharacter* character = (AAgentCharacter*)Parent;
	
	if (character != nullptr)
	{
		if (!initialised)
		{
			character->GoToRandomLocation();
			GoalLocation = character->PointerPosForPathfinding;
			initialised = true;
		}

		TimeSinceStart += DeltaTime;
		if (TimeSinceStart >= TimeToRegen)
		{
			TimeSinceStart = 0;
			TimeToRegen = FMath::RandRange(2, 15);
			initialised = false;
		}

		IAgentTask::Run(DeltaTime);
		character->PointerPosForPathfinding = GoalLocation;
	}
}

bool GoToRandomLocationAgentTask::IsFinished()
{
	return IAgentTask::IsFinished();
}

bool GoToRandomLocationAgentTask::IsAtTargetLocation()
{
	return false;
}