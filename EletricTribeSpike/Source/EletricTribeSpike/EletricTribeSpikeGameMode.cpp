// Copyright Epic Games, Inc. All Rights Reserved.

#include "EletricTribeSpikeGameMode.h"
#include "EletricTribeSpikeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEletricTribeSpikeGameMode::AEletricTribeSpikeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
