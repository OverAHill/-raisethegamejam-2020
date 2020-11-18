// Copyright Epic Games, Inc. All Rights Reserved.

#include "RaiseTheGameJame2020GameMode.h"
#include "RaiseTheGameJame2020Character.h"
#include "UObject/ConstructorHelpers.h"

ARaiseTheGameJame2020GameMode::ARaiseTheGameJame2020GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
