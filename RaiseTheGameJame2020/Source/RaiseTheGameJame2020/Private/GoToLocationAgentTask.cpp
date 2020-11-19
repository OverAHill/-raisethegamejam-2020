// Fill out your copyright notice in the Description page of Project Settings.


#include "GoToLocationAgentTask.h"

GoToLocationAgentTask::GoToLocationAgentTask(AActor* parent, FVector goalLocation)
{
	Parent = parent;
	GoalLocation = goalLocation;
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
	if (!IsRunning)
	{
		IsRunning = true;
	
		FString location = "Going To Location: " + FString::SanitizeFloat(GoalLocation.X) + FString::SanitizeFloat(GoalLocation.Y) + FString::SanitizeFloat(GoalLocation.Z);
		GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Blue, location);

		FString currentLocation = "At Location: " + FString::SanitizeFloat(Parent->GetActorLocation().X) + FString::SanitizeFloat(Parent->GetActorLocation().Y) + FString::SanitizeFloat(Parent->GetActorLocation().Z);
		GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Blue, currentLocation);

		FVector direction = GoalLocation - Parent->GetActorLocation();

		FString distance = "Distance: " + FString::SanitizeFloat(direction.Size());
		GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Blue, distance);
	}

	IAgentTask::Run(DeltaTime);

	FVector direction = GoalLocation - Parent->GetActorLocation();

	direction.Normalize();

	Parent->SetActorLocation(Parent->GetActorLocation() + (direction * 100 * DeltaTime));
}

bool GoToLocationAgentTask::IsFinished()
{
	return IAgentTask::IsFinished();
}

bool GoToLocationAgentTask::IsAtTargetLocation()
{
	FVector direction = GoalLocation - Parent->GetActorLocation();

	// If we're too far return false
	if (direction.Size() > 10)
	{
		return false;
	}

	completed = true;
	return true;
}