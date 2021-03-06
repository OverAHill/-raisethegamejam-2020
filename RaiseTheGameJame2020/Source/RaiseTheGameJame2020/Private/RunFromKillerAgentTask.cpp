// Fill out your copyright notice in the Description page of Project Settings.


#include "RunFromKillerAgentTask.h"

RunFromKillerAgentTask::RunFromKillerAgentTask(AActor* parentReference, FVector* pointerPosForPathfinding, AActor* killerReference)
{
	ParentReference = parentReference;
	PointerPosForPathfinding = pointerPosForPathfinding;
	KillerReference = killerReference;
}

RunFromKillerAgentTask::~RunFromKillerAgentTask()
{

}

bool RunFromKillerAgentTask::CanRun()
{
	if (fleeTime < escapeTime)
	{
		return true;
	}

	return IAgentTask::CanRun();
}

void RunFromKillerAgentTask::Run(float DeltaTime)
{
	FVector direction = GetDirectionToKiller();
	direction.Normalize();

	FVector goalLocation = ParentReference->GetActorLocation() + (direction * 100 * DeltaTime * -1);

	// Run Away
	*PointerPosForPathfinding = goalLocation;

	if (!CanSeeKiller())
	{
		fleeTime += DeltaTime;

		if (fleeTime >= escapeTime)
		{
			completed = true;
		}
	}
}

bool RunFromKillerAgentTask::IsFinished()
{
	return IAgentTask::IsFinished();
}

bool RunFromKillerAgentTask::CanSeeKiller()
{
	return false;
}

FVector RunFromKillerAgentTask::GetDirectionToKiller()
{
	return KillerReference->GetActorLocation() - ParentReference->GetActorLocation();
}

float RunFromKillerAgentTask::GetDistanceToKiller()
{
	FVector direction = GetDirectionToKiller();
	return direction.Size();
}