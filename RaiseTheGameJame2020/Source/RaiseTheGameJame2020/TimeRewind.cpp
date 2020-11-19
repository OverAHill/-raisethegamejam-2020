// Fill out your copyright notice in the Description page of Project Settings.


#include "TimeRewind.h"
#include "RaiseTheGameJame2020Character.h"
#include "Public/AgentCharacter.h"

TimeRewind::TimeRewind(ACharacter* character) :
	RewindDuration(10.0f),
	RewindSpacing(0.2f),
	MaxElements(RewindDuration / RewindSpacing),
	RewindSpeed(3.0f),
	Character(character),
	RewindProgress(0.0f)
{
	TimeNodes.Reserve(MaxElements);

	AICharacter = dynamic_cast<AAgentCharacter*>(character);
}

TimeRewind::~TimeRewind()
{
}

void TimeRewind::AddTimeNode()
{
	TimeNode newNode;
	newNode.position = Character->GetActorLocation();
	newNode.rotation = Character->GetActorRotation();

	if (AICharacter)
	{
		AICharacter->TaskManager->FillTimeNode(newNode);
	}

	TimeNodes.EmplaceAt(0, newNode);

	if (TimeNodes.Num() > MaxElements)
		TimeNodes.RemoveAt(MaxElements);
}

bool TimeRewind::Rewind(float deltaTime)
{
	RewindProgress += deltaTime * RewindSpeed;

	float test = RewindProgress / RewindSpacing;
	int targetElement = floorf(test);
	float percent = fmod(RewindProgress, RewindSpacing);


	if (targetElement > TimeNodes.Num() - 1)
	{
		// We havent got enough data to jump back this far
		// End the rewind
		TimeNodes.Reset();
		RewindProgress = 0;
		return true;
	}


	TimeNode currentElement;
	TimeNode currentTarget;
	if (targetElement == 0)
	{
		currentElement.position = Character->GetActorLocation();
		currentElement.rotation = Character->GetActorRotation();
	}
	else
	{
		currentElement = TimeNodes[targetElement - 1];
	}

	currentTarget = TimeNodes[targetElement];

	TimeNode finalValues;
	finalValues = currentElement + ((currentTarget - currentElement) * percent);

	Character->SetActorLocation(finalValues.position);
	Character->SetActorRotation(finalValues.rotation);

	if (AICharacter)
	{
		AICharacter->TaskManager->OverwriteFromTimeNode(TimeNodes[targetElement]);
	}

	if (RewindProgress > RewindDuration)
	{
		TimeNodes.Reset();
		RewindProgress = 0;
		return true;
	}

	return false;
}
