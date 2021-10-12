// Fill out your copyright notice in the Description page of Project Settings.


#include "TestCroudCharacter.h"

#include "TestCrowdPlayerController.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Navigation/CrowdManager.h"

// Sets default values
ATestCroudCharacter::ATestCroudCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	
}

void ATestCroudCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void ATestCroudCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
