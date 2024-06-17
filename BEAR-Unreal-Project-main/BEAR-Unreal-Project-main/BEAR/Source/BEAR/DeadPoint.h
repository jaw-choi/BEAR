// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DeadPoint.generated.h"

UCLASS()
class BEAR_API ADeadPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADeadPoint();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:

	UPROPERTY(visibleAnyWhere)
		class AMainCharacter* mainCharacter;

	UPROPERTY(visibleAnyWhere)
		class UBoxComponent* collisionBox;

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* overralppedComp, AActor* ohterActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);
};
