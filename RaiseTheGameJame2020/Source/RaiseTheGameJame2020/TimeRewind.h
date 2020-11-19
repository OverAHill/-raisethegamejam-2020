// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

class ARaiseTheGameJame2020Character;
class UParticleSystemComponent;


struct TimeNode
{
	FVector position;
	FRotator rotation;

	TimeNode()
	{
	}

	TimeNode(FVector& pos, FRotator& rot)
	{
		position = pos;
		rotation = rot;
	}


	TimeNode operator = (const TimeNode& rhs)
	{
		position = rhs.position;
		rotation = rhs.rotation;
		return *this;
	}

	TimeNode operator + (const TimeNode& rhs)
	{
		TimeNode temp = *this;
		temp.position += rhs.position;
		temp.rotation += rhs.rotation;
		return temp;
	}

	TimeNode operator - (const TimeNode& rhs)
	{
		TimeNode temp = *this;
		temp.position -= rhs.position;
		temp.rotation -= rhs.rotation;
		return temp;
	}

	TimeNode operator * (const float& val)
	{
		TimeNode temp = *this;
		temp.position *= val;
		temp.rotation *= val;
		return temp;
	}
};

/**
 * 
 */
class RAISETHEGAMEJAME2020_API TimeRewind
{
public:
	TimeRewind(ARaiseTheGameJame2020Character* character);
	~TimeRewind();

	float RewindDuration;
	float RewindSpacing;
	int MaxElements;
	float RewindSpeed;

	void AddTimeNode();
	bool Rewind(float deltaTime);
	float GetSpacing() { return RewindSpacing; }
	float GetRewindSpeed() { return RewindSpeed; }

private:
	ARaiseTheGameJame2020Character* Character;
	TArray<TimeNode> TimeNodes;

	float RewindProgress;
};
