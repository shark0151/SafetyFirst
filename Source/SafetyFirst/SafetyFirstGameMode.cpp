// Copyright Epic Games, Inc. All Rights Reserved.

#include "SafetyFirstGameMode.h"
#include "SafetyFirstPawn.h"
#include "SafetyFirstHud.h"

ASafetyFirstGameMode::ASafetyFirstGameMode()
{
	DefaultPawnClass = ASafetyFirstPawn::StaticClass();
	HUDClass = ASafetyFirstHud::StaticClass();
}
