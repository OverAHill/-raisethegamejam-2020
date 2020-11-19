// Fill out your copyright notice in the Description page of Project Settings.


#include "RunFromKillerAgentTask.h"

RunFromKillerAgentTask::RunFromKillerAgentTask(AActor* parentReference, AActor* killerReference)
{

}

RunFromKillerAgentTask::~RunFromKillerAgentTask()
{

}

bool RunFromKillerAgentTask::CanRun()
{
	if (CanSeeKiller())
	{
		return true;
	}
	else if (GetDistanceToKiller() > 100)
	{
		return false;
	}

	return IAgentTask::CanRun();
}

void RunFromKillerAgentTask::Run(float DeltaTime)
{
	FVector direction = GetDirectionToKiller();
	direction.Normalize();

	// Run Away
	ParentReference->SetActorLocation(ParentReference->GetActorLocation() + (direction * 100 * DeltaTime * -1));
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