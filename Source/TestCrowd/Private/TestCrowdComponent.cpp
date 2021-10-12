// Fill out your copyright notice in the Description page of Project Settings.


#include "TestCrowdComponent.h"

#include "Components/CapsuleComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Navigation/CrowdAgentInterface.h"
#include "Navigation/CrowdManager.h"

UTestCrowdComponent::UTestCrowdComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UTestCrowdComponent::InitializeComponent()
{
	Super::InitializeComponent();
	
}

void UTestCrowdComponent::BeginPlay()
{
	Super::BeginPlay();
	
	UCrowdManager* CrowdManager = UCrowdManager::GetCurrent(this);
	UE_LOG(LogTemp,Warning,TEXT("Agent want to be registered"));
	if (CrowdManager)
	{
		ICrowdAgentInterface* IAgent = Cast<ICrowdAgentInterface>(this);
		CrowdManager->RegisterAgent(IAgent);		
		UE_LOG(LogTemp,Warning,TEXT("Agent was registered"));
	}
	
	const auto Controller = GetOwner<AController>();
	if (Controller && Controller->GetCharacter() && Controller->GetCharacter()->GetMovementComponent())	
	{
		MoveComp = GetOwner<AController>()->GetCharacter()->GetMovementComponent();
		UE_LOG(LogTemp,Warning,TEXT("MoveComp Set"));
	}
}

FVector UTestCrowdComponent::GetCrowdAgentLocation() const
{
	if (!MoveComp || !MoveComp->UpdatedComponent)
		return FVector::ZeroVector;
	
	return MoveComp->UpdatedComponent->GetComponentLocation() - FVector(0,0,MoveComp->UpdatedComponent->Bounds.BoxExtent.Z);
}

FVector UTestCrowdComponent::GetCrowdAgentVelocity() const
{
	if (!MoveComp)
		return FVector::ZeroVector;	
	return MoveComp->Velocity;
}

void UTestCrowdComponent::GetCrowdAgentCollisions(float& CylinderRadius, float& CylinderHalfHeight) const
{
	if (MoveComp && MoveComp->UpdatedComponent)
	{
		MoveComp->UpdatedComponent->CalcBoundingCylinder(CylinderRadius, CylinderHalfHeight);
	}
}

float UTestCrowdComponent::GetCrowdAgentMaxSpeed() const
{
	return MoveComp ? MoveComp->GetMaxSpeed() : 0.0f;
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
