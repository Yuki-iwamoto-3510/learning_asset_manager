// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestAssetManagerGameMode.h"
#include "TestAssetManagerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestAssetManagerGameMode::ATestAssetManagerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
