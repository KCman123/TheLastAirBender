// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheLastAirBenderGameMode.h"
#include "TheLastAirBenderCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheLastAirBenderGameMode::ATheLastAirBenderGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
