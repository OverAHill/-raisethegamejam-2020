// Fill out your copyright notice in the Description page of Project Settings.
#include "IAgentTask.h"

IAgentTask::IAgentTask()
{
	completed = false;
	Failed = false;
	maxRetries = 3;
	retryCount = 0;
}

IAgentTask::~IAgentTask()
{

}

bool IAgentTask::CanRun()
{
	CheckForFailed();
	return true;
}
	
void IAgentTask::Run(float DeltaTime)
{
	// Implement in children
}

bool IAgentTask::IsFinished()
{
	return completed;
}

void IAgentTask::CheckForFailed()
{
	if (retryCount >= maxRetries)
	{
		Failed = true;
		completed = true;
	}
}