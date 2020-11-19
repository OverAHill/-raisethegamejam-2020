// Fill out your copyright notice in the Description page of Project Settings.
#include "WaitForDurationAgentTask.h"

WaitForDurationAgentTask::WaitForDurationAgentTask(float deltaToWait)
{
	DeltaToWait = deltaToWait;
	WaitedDelta = 0;
}

WaitForDurationAgentTask::~WaitForDurationAgentTask()
{

}

bool WaitForDurationAgentTask::CanRun()
{
	return IAgentTask::CanRun();
}

void WaitForDurationAgentTask::Run(float DeltaTime)
{
	IAgentTask::Run((DeltaTime));

	if (WaitedDelta <= DeltaToWait)
	{
		WaitedDelta += DeltaTime;
	}
	else
	{
		completed = true;
	}
}

bool WaitForDurationAgentTask::IsFinished()
{
	return IAgentTask::IsFinished();
}
