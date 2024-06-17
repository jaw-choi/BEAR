// Fill out your copyright notice in the Description page of Project Settings.


#include "DeadPoint.h"
#include "MainCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"

// Sets default values
ADeadPoint::ADeadPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	collisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("COLLISIONBOX_2"));
	collisionBox->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	collisionBox->SetCollisionProfileName("Trigger");

	RootComponent = collisionBox;

	//collisionBox->OnComponentBeginOverlap.AddDynamic(this, &ADeadPoint::OnOverlapBegin);
}

// Called when the game starts or when spawned
void ADeadPoint::BeginPlay()
{
	Super::BeginPlay();
	mainCharacter = Cast<AMainCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
}

// Called every frame
void ADeadPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADeadPoint::OnOverlapBegin(UPrimitiveComponent* overralppedComp, AActor* ohterActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{
	//mainCharacter->RespawnPlayer();
}

