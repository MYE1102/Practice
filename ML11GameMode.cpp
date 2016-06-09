// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "ML11.h"
#include "ML11GameMode.h"
#include "ML11HUD.h"
#include "ML11Character.h"

AML11GameMode::AML11GameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AML11HUD::StaticClass();
}
