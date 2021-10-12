// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/MovementComponent.h"
#include "Navigation/CrowdAgentInterface.h"
#include "TestCrowdComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class TESTCROWD_API UTestCrowdComponent : public UActorComponent, public ICrowdAgentInterface
{
	GENERATED_BODY()

public:
	UTestCrowdComponent();
	virtual void InitializeComponent() override;
	virtual void BeginPlay() override;

	virtual FVector GetCrowdAgentLocation() const override;
	virtual FVector GetCrowdAgentVelocity() const override;
	virtual void GetCrowdAgentCollisions(float& CylinderRadius, float& CylinderHalfHeight) const override;
	virtual float GetCrowdAgentMaxSpeed() const override;
	virtual int32 GetCrowdAgentAvoidanceGroup() const override;
	virtual int32 GetCrowdAgentGroupsToAvoid() const override;
	virtual int32 GetCrowdAgentGroupsToIgnore() const override;
	
private:
	UPROPERTY(Transient)
	UMovementComponent *MoveComp;
};
