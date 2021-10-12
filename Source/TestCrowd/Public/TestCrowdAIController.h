// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TestCrowdPlayerController.h"

#include "TestCrowdAIController.generated.h"

/**
 * 
 */
UCLASS()
class TESTCROWD_API ATestCrowdAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	ATestCrowdAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
};
