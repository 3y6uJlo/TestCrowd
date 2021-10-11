// Fill out your copyright notice in the Description page of Project Settings.


#include "TestCrowdPlayerController.h"
#include "TestCrowdComponent.h"


ATestCrowdPlayerController::ATestCrowdPlayerController()
{
	TestCrowdComponent = CreateDefaultSubobject<UTestCrowdComponent>("CrowdComponent");
}


