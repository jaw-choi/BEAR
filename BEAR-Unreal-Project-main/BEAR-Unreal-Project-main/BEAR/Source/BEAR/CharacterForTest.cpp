// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterForTest.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
ACharacterForTest::ACharacterForTest()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	thirdPersonViewCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("THIRDPERSONVIEWCAMERA"));

	firstPersonViewCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FIRSTPERSONVIEWCAMERA"));

	springArm->SetupAttachment(GetRootComponent());
	thirdPersonViewCamera->SetupAttachment(springArm);

	firstPersonViewCamera->SetupAttachment(GetRootComponent());
	firstPersonViewCamera->SetRelativeLocation(FVector(15.f, 0.f, 80.f));

	springArm->TargetArmLength = 500.f;
	springArm->SetRelativeRotation(FRotator(-35.f, 0.f, 0.f));

	GetMesh()->SetRelativeLocationAndRotation(FVector(0.f, 0.f, -88.f), FRotator(0.f, -90.f, 0.f));

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SM(TEXT("SkeletalMesh'/Game/BungeeMan/SKM_BungeeMan.SKM_BungeeMan'"));

	if (SM.Succeeded() == true)
	{
		GetMesh()->SetSkeletalMesh(SM.Object);
	}
	isFirstPersonView = false;
	IsRagdoll = false;
}

// Called when the game starts or when spawned
void ACharacterForTest::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ACharacterForTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ACharacterForTest::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
//	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &ACharacterForTest::UpDown);
//	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &ACharacterForTest::LeftRight);
//	PlayerInputComponent->BindAction(TEXT("Ragdoll"), IE_Pressed, this, &ACharacterForTest::RagDoll);
//	PlayerInputComponent->BindAction(TEXT("Stand"), IE_Pressed, this, &ACharacterForTest::Stand);
	PlayerInputComponent->BindAction(TEXT("ChangeCameraView"), IE_Pressed, this, &ACharacterForTest::ChangeCameraView);
}

void ACharacterForTest::UpDown(float value)
{
	if (value > 0)
	{
		UE_LOG(LogTemp, Display, TEXT("Character is Moving Forward"));
	}
	else if (value < 0)
	{
		UE_LOG(LogTemp, Display, TEXT("Character is Moving Backward"));
	}
	
	if (IsRagdoll == false)
	{
		AddMovementInput(GetActorForwardVector(), value);
	}}

void ACharacterForTest::LeftRight(float value)
{
	if (value > 0)
	{
		UE_LOG(LogTemp, Display, TEXT("Character is Moving Right"));
	}
	else if (value < 0)
	{
		UE_LOG(LogTemp, Display, TEXT("Character is Moving Left"));
	}
	if (IsRagdoll == false)
	{
		AddMovementInput(GetActorRightVector(), value);
	}
}

void ACharacterForTest::ChangeCameraView()
{
	if (isFirstPersonView)
	{
		firstPersonViewCamera->SetActive(false);
		thirdPersonViewCamera->SetActive(true);
		isFirstPersonView = false;
	}
	else
	{
		thirdPersonViewCamera->SetActive(false);
		firstPersonViewCamera->SetActive(true);
		isFirstPersonView = true;
	}
}

void ACharacterForTest::RagDoll()
{
	if (UPrimitiveComponent* PrimitiveComponent = FindComponentByClass<UPrimitiveComponent>())
	{
		PrimitiveComponent->SetCollisionProfileName("Ragdoll");
	}
	GetMesh()->SetSimulatePhysics(true);
	UE_LOG(LogTemp, Display, TEXT("Character is ragdolling"));
	IsRagdoll = true;
}

void ACharacterForTest::Stand()
{
	if (UPrimitiveComponent* PrimitiveComponent = FindComponentByClass<UPrimitiveComponent>())
	{
		PrimitiveComponent->SetCollisionProfileName("Ragdoll");
	}
	GetMesh()->SetSimulatePhysics(false);
	UE_LOG(LogTemp, Display, TEXT("Character is standing"));
	IsRagdoll = false;
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.f, 0.f, -88.f), FRotator(0.f, -90.f, 0.f));
}
