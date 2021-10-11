// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TestCrowdPlayerController.generated.h"

class UTestCrowdComponent;

UCLASS()
class TESTCROWD_API ATestCrowdPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	ATestCrowdPlayerController();

	UPROPERTY(VisibleAnywhere, Category="Components")
	UTestCrowdComponent *TestCrowdComponent;
};
