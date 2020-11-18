// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

class ARaiseTheGameJame2020Character;



struct TimeNode
{
	FVector position;
	FRotator rotation;
	FRotator camRotation;

	TimeNode()
	{
	}

	TimeNode(FVector& pos, FRotator& rot, FRotator& camRot)
	{
		position = pos;
		rotation = rot;
		camRotation = camRot;
	}


	TimeNode operator = (const TimeNode& rhs)
	{
		position = rhs.position;
		rotation = rhs.rotation;
		camRotation = rhs.camRotation;
		return *this;
	}

	TimeNode operator + (const TimeNode& rhs)
	{
		TimeNode temp = *this;
		temp.position += rhs.position;
		temp.rotation += rhs.rotation;
		temp.camRotation += rhs.camRotation;
		return temp;
	}

	TimeNode operator - (const TimeNode& rhs)
	{
		TimeNode temp = *this;
		temp.position -= rhs.position;
		temp.rotation -= rhs.rotation;
		temp.camRotation -= rhs.camRotation;
		return temp;
	}

	TimeNode operator * (const float& val)
	{
		TimeNode temp = *this;
		temp.position *= val;
		temp.rotation *= val;
		temp.camRotation *= val;
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

	void AddTimeNode();
	bool Rewind(float deltaTime);
	float GetSpacing() { return RewindSpacing; }
	float GetRewindSpeed() { return RewindSpeed; }

private:
	ARaiseTheGameJame2020Character* Character;
	TArray<TimeNode> TimeNodes;
	TimeNode CurrentTarget;

	float RewindProgress;
	float RewindSpeed;
};
