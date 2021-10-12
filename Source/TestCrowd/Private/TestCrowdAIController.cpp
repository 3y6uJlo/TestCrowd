// Fill out your copyright notice in the Description page of Project Settings.


#include "TestCrowdAIController.h"

#include "TestAICrowdFollowingComponent.h"

ATestCrowdAIController::ATestCrowdAIController(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer.SetDefaultSubobjectClass<UTestAICrowdFollowingComponent>(TEXT("PathFollowingComponent")))
{
	
}
