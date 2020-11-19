// Fill out your copyright notice in the Description page of Project Settings.


#include "GoToLocationAgentTask.h"
#include "AgentController.h"

GoToLocationAgentTask::GoToLocationAgentTask(AActor* parent, FVector goalLocation, FVector* pointerPosForPathfinding)
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

	/*FVector direction = GoalLocation - Parent->GetActorLocation();

	direction.Normalize();*/

	*PointerPosForPathfinding = GoalLocation;
	//((AAgentController*)AgentController)->SetGoalLocationAndMovementSpeed(GoalLocation, 1);

	//Parent->SetActorLocation(Parent->GetActorLocation() + (direction * 100 * DeltaTime));
}

bool GoToLocationAgentTask::IsFinished()
{
	return IAgentTask::IsFinished();
}

bool GoToLocationAgentTask::IsAtTargetLocation()
{
	FVector direction = GoalLocation - Parent->GetActorLocation();
	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Blue, FString::SanitizeFloat(direction.Size()));

	// If we're too far return false
	if (direction.Size() > 50)
	{
		return false;
	}

	completed = true;
	return true;
}