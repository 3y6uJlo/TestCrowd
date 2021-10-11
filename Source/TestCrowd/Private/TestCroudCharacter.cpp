// Fill out your copyright notice in the Description page of Project Settings.


#include "TestCroudCharacter.h"

#include "GameFramework/PawnMovementComponent.h"
#include "Navigation/CrowdManager.h"

// Sets default values
ATestCroudCharacter::ATestCroudCharacter()
{
	/*UCrowdManager* CrowdManager = UCrowdManager::GetCurrent(GetWorld());
	if (CrowdManager)
	{
		ICrowdAgentInterface* IAgent = Cast<ICrowdAgentInterface>(this);
		CrowdManager->RegisterAgent(IAgent);
		bRegisteredWithCrowdSimulation = true;
	}
	else
	{
		bRegisteredWithCrowdSimulation = false;
		*/
	//--------------------------------------------------------------------
	
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ATestCroudCharacter::BeginPlay()
{
	Super::BeginPlay();
	/*UCrowdManager* CrowdManager = UCrowdManager::GetCurrent(GetWorld());
	if (CrowdManager)
	{
	CrowdManager->RegisterAgent(this);
	}*/
}

// Called every frame
void ATestCroudCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
/*
virtual FVector GetCrowdAgentLocation() const override;
virtual FVector GetCrowdAgentVelocity() const override;
virtual void GetCrowdAgentCollisions(float& CylinderRadius, float& CylinderHalfHeight) const override;
virtual float GetCrowdAgentMaxSpeed() const override;
virtual int32 GetCrowdAgentAvoidanceGroup() const override;
virtual int32 GetCrowdAgentGroupsToAvoid() const override;
virtual int32 GetCrowdAgentGroupsToIgnore() const override;
// Called to bind functionality to input
void ATestCroudCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

FVector ATestCroudCharacter::GetCrowdAgentLocation() const
{
	return GetActorLocation();
}

FVector ATestCroudCharacter::GetCrowdAgentVelocity() const
{
	
}

void ATestCroudCharacter::GetCrowdAgentCollisions(float& CylinderRadius, float& CylinderHalfHeight) const
{
	
}

float ATestCroudCharacter::GetCrowdAgentMaxSpeed() const
{	
	return GetMovementComponent()->GetMaxSpeed();
}

int32 ATestCroudCharacter::GetCrowdAgentAvoidanceGroup() const
{
	return 0;
}

int32 ATestCroudCharacter::GetCrowdAgentGroupsToAvoid() const
{
	return 0;
}

int32 ATestCroudCharacter::GetCrowdAgentGroupsToIgnore() const
{
	return 0;
}
*/
