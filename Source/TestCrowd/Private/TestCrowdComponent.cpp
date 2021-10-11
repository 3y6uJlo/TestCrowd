// Fill out your copyright notice in the Description page of Project Settings.


#include "TestCrowdComponent.h"

#include "Components/CapsuleComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Navigation/CrowdAgentInterface.h"
#include "Navigation/CrowdManager.h"

UTestCrowdComponent::UTestCrowdComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UTestCrowdComponent::InitializeComponent()
{
	Super::InitializeComponent();
	UCrowdManager* CrowdManager = UCrowdManager::GetCurrent(this);
	if (CrowdManager)
	{
		ICrowdAgentInterface* IAgent = Cast<ICrowdAgentInterface>(this);
		CrowdManager->RegisterAgent(IAgent);
	}
}


FVector UTestCrowdComponent::GetCrowdAgentLocation() const
{
	if (!GetOwner<AController>() ||
		!GetOwner<AController>()->GetPawn())
		return FVector::ZeroVector;
	return GetOwner<AController>()->GetPawn()->GetActorLocation();
}

FVector UTestCrowdComponent::GetCrowdAgentVelocity() const
{
	if (!GetOwner<AController>() ||
		!GetOwner<AController>()->GetPawn() ||
		!GetOwner<AController>()->GetPawn()->GetMovementComponent())
		return FVector::ZeroVector;
	const auto MovementComp = GetOwner<AController>()->GetPawn()->GetMovementComponent();

	return (MovementComp ? MovementComp->Velocity : FVector::ZeroVector);
}

void UTestCrowdComponent::GetCrowdAgentCollisions(float& CylinderRadius, float& CylinderHalfHeight) const
{
	if (!GetOwner<AController>() ||
		!GetOwner<AController>()->GetCharacter() ||
		!GetOwner<AController>()->GetCharacter()->GetCapsuleComponent())
		return;
	CylinderRadius = GetOwner<AController>()->GetCharacter()->GetCapsuleComponent()->GetScaledCapsuleRadius();
	CylinderRadius = GetOwner<AController>()->GetCharacter()->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
}

float UTestCrowdComponent::GetCrowdAgentMaxSpeed() const
{
	return GetOwner<AController>()->GetPawn()->GetMovementComponent()->GetMaxSpeed();
}

int32 UTestCrowdComponent::GetCrowdAgentAvoidanceGroup() const
{
	return 0;
}

int32 UTestCrowdComponent::GetCrowdAgentGroupsToAvoid() const
{
	return 0;
}

int32 UTestCrowdComponent::GetCrowdAgentGroupsToIgnore() const
{
	return 0;
}
