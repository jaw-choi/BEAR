// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterForTest.generated.h"

UCLASS()
class BEAR_API ACharacterForTest : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterForTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void UpDown(float value);
	void LeftRight(float value);
	void RagDoll();
	void Stand();
	void ChangeCameraView();
private:

	UPROPERTY(visibleAnyWhere)
	class USpringArmComponent* springArm;

	UPROPERTY(visibleAnyWhere)
	class UCameraComponent* thirdPersonViewCamera;

	UPROPERTY(visibleAnyWhere)
	class UCameraComponent* firstPersonViewCamera;

	UPROPERTY()
		bool isFirstPersonView;

	bool IsRagdoll;
};
