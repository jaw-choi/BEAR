// Fill out your copyright notice in the Description page of Project Settings.


#include "TestInput.h"

// Sets default values
ATestInput::ATestInput()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ATestInput::BeginPlay()
{
    Super::BeginPlay();
    BindToInput();
}

// Called every frame
void ATestInput::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void ATestInput::BindToInput()
{
    // Initialize our component
    InputComponent = NewObject<UInputComponent>(this);
    InputComponent->RegisterComponent();
    if (InputComponent)
    {
        // Bind inputs here
        InputComponent->BindAction("SPACE BAR", IE_Pressed, this, &ATestInput::print);
        // etc...

        // Now hook up our InputComponent to one in a Player
        // Controller, so that input flows down to us
        EnableInput(GetWorld()->GetFirstPlayerController());
    }
}

void ATestInput::print()
{
    UE_LOG(LogTemp, Display, TEXT("SPACE BAR Pressed"));
}
