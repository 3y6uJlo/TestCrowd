// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "TestAICrowdFollowingComponent.generated.h"

/**
 * 
 */
UCLASS()
class TESTCROWD_API UTestAICrowdFollowingComponent : public UCrowdFollowingComponent
{
	GENERATED_BODY()
	
public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
};
