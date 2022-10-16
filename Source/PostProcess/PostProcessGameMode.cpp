// Copyright Epic Games, Inc. All Rights Reserved.

#include "PostProcessGameMode.h"
#include "PostProcessCharacter.h"
#include "UObject/ConstructorHelpers.h"

APostProcessGameMode::APostProcessGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
