// Copyright Epic Games, Inc. All Rights Reserved.

#include "YasyaProjectVer1GameMode.h"
#include "YasyaProjectVer1Character.h"
#include "UObject/ConstructorHelpers.h"

AYasyaProjectVer1GameMode::AYasyaProjectVer1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
