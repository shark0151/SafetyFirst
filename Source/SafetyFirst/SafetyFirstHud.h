// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SafetyFirstHud.generated.h"

UCLASS(config = Game)
class ASafetyFirstHud : public AHUD
{
	GENERATED_BODY()

public:
	ASafetyFirstHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface

};
