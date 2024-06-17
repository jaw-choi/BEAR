// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	startCharacterPos = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//UE_LOG(LogTemp, Warning, TEXT("%f, %f, %f"), startCharacterPos.X, startCharacterPos.Y, startCharacterPos.Z);
}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

FVector AMainCharacter::GetPlayerRespawnPos()
{
	return startCharacterPos;
}

void AMainCharacter::SetPlayerRespawnPos(FVector pos)
{
	startCharacterPos = pos;
}

void AMainCharacter::RespawnPlayer()
{
	SetActorLocation(startCharacterPos);
}


