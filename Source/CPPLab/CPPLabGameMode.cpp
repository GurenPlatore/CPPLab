// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPPLabGameMode.h"
#include "CPPLabCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACPPLabGameMode::ACPPLabGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
