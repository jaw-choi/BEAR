// Fill out your copyright notice in the Description page of Project Settings.


#include "CheckPoint.h"
#include "MainCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"

// Sets default values
ACheckPoint::ACheckPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	collisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("COLLISIONBOX"));
	collisionBox->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	collisionBox->SetCollisionProfileName("Trigger");

	RootComponent = collisionBox;

	collisionBox->OnComponentBeginOverlap.AddDynamic(this, &ACheckPoint::OnOverlapBegin);
}

// Called when the game starts or when spawned
void ACheckPoint::BeginPlay()
{
	Super::BeginPlay();
	mainCharacter = Cast<AMainCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
}

// Called every frame
void ACheckPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACheckPoint::OnOverlapBegin(UPrimitiveComponent* overralppedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{
	if (otherActor == mainCharacter)
	{
		FVector respawnPos = GetActorLocation();
		respawnPos.Z += 50.f;
		mainCharacter->SetPlayerRespawnPos(respawnPos);
	}
}


