//// Fill out your copyright notice in the Description page of Project Settings.
//
//
//#include "RunThroughTasksAgentTask.h"
//#include "AgentTaskManager.h"
//
//RunThroughTasksAgentTask::RunThroughTasksAgentTask()
//{
//}
//
//RunThroughTasksAgentTask::~RunThroughTasksAgentTask()
//{
//}
//
//bool RunThroughTasksAgentTask::CanRun()
//{
//	IAgentTask::CanRun();
//
//	return completed;
//}
//
//void RunThroughTasksAgentTask::Run(float DeltaTime)
//{
//	IAgentTask::Run(DeltaTime);
//
//	RunCurrentTask(DeltaTime);
//
//	Run(DeltaTime);
//}
//
//void RunThroughTasksAgentTask::RunCurrentTask(float DeltaTime)
//{
//	if (CurrentTask != nullptr)
//	{
//		if (CurrentTask->IsFinished())
//		{
//			SubTasks.Dequeue(CurrentTask);
//			RunCurrentTask(DeltaTime);
//			return;
//		}
//
//		if (CurrentTask->CanRun())
//		{
//			CurrentTask->Run(DeltaTime);
//		}
//	}
//}
//
//bool RunThroughTasksAgentTask::IsFinished()
//{
//	IAgentTask::IsFinished();
//	return true;
//}