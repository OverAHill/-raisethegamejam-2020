// Fill out your copyright notice in the Description page of Project Settings.


#include "TaskTarget.h"

// Add default functionality here for any ITaskTarget functions that are not pure virtual.

void ITaskTarget::SetIsAlive(bool state)
{
	bIsAlive = state;
}

bool ITaskTarget::GetIsAlive()
{
	return bIsAlive;
}