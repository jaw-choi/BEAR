// Fill out your copyright notice in the Description page of Project Settings.


#include "TestGameModeBase.h"
#include "GameFramework/Character.h"

ATestGameModeBase::ATestGameModeBase()
{

	static ConstructorHelpers::FClassFinder<ACharacter> BP_character(TEXT("Blueprint'/Game/BP_Player/BP_Player.BP_Player_C'"));

	if (BP_character.Succeeded() == true)
	{
		DefaultPawnClass = BP_character.Class;
	}
}
