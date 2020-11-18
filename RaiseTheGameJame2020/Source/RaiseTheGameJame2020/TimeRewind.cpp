// Fill out your copyright notice in the Description page of Project Settings.


#include "TimeRewind.h"
#include "RaiseTheGameJame2020Character.h"

TimeRewind::TimeRewind(ARaiseTheGameJame2020Character* character) :
	RewindDuration(10.0f),
	RewindSpacing(0.2f),
	MaxElements(RewindDuration / RewindSpacing),
	RewindSpeed(3.0f),
	Character(character),
	RewindProgress(0.0f)
{
	TimeNodes.Reserve(MaxElements);
}

TimeRewind::~TimeRewind()
{
}

void TimeRewind::AddTimeNode()
{
	FVector charPosition = Character->GetActorLocation();
	FRotator charRotation = Character->GetActorRotation();
	FRotator camRotation = Character->Controller->GetControlRotation();

	TimeNodes.EmplaceAt(0, charPosition, charRotation, camRotation);

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
		currentElement.camRotation = Character->Controller->GetControlRotation();
	}
	else
	{
		currentElement = TimeNodes[targetElement - 1];
	}

	currentTarget = TimeNodes[targetElement];

	TimeNode finalValues = currentElement + ((currentTarget - currentElement) * percent);

	Character->SetActorLocation(finalValues.position);
	Character->SetActorRotation(finalValues.rotation);
	Character->Controller->SetControlRotation(finalValues.camRotation);

	if (RewindProgress > RewindDuration)
	{
		TimeNodes.Reset();
		RewindProgress = 0;
		return true;
	}

	return false;
}
