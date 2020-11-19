// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Public/AgentTaskManager.h"

class ARaiseTheGameJame2020Character;
class UParticleSystemComponent;
class AAgentCharacter;


class TimeNode
{
public:
	FVector position;
	FRotator rotation;
	IAgentTask currentTask;
	TQueue<IAgentTask> remainingTasks;

	TimeNode()
	{
	}

	TimeNode(FVector& pos, FRotator& rot)
	{
		position = pos;
		rotation = rot;
	}

	TimeNode(FVector& pos, FRotator& rot, IAgentTask& currTask, TQueue<IAgentTask> remTasks)
	{
		position = pos;
		rotation = rot;
		currentTask = currTask;

		while (!remTasks.IsEmpty())
		{
			IAgentTask poppedTask;
			remTasks.Dequeue(poppedTask);
			remainingTasks.Enqueue(poppedTask);
		}
	}

	TimeNode(const TimeNode& copy)
	{
		position = copy.position;
		rotation = copy.rotation;
		currentTask = copy.currentTask;

		TArray<IAgentTask> tasks;

		while (!copy.remainingTasks.IsEmpty())
		{
			IAgentTask poppedTask;
			const_cast<TimeNode&>(copy).remainingTasks.Dequeue(poppedTask);
			tasks.Add(poppedTask);
		}

		for (auto task : tasks)
		{
			const_cast<TimeNode&>(copy).remainingTasks.Enqueue(task);
			remainingTasks.Enqueue(task);
		}
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
	TimeRewind(ACharacter* character);
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
	ACharacter* Character;
	TArray<TimeNode> TimeNodes;

	float RewindProgress;

	AAgentCharacter* AICharacter;
};
