// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "HungerGamesGameMode.h"
#include "HungerGamesHUD.h"
#include "HungerGamesCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHungerGamesGameMode::AHungerGamesGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHungerGamesHUD::StaticClass();
}
