// Fill out your copyright notice in the Description page of Project Settings.


#include "TestAICrowdFollowingComponent.h"

#include "Navigation/CrowdManager.h"

void UTestAICrowdFollowingComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                                   FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	UCrowdManager *Manager = UCrowdManager::GetCurrent(this);
	int32 NumAgents = Manager->GetNumNearbyAgents(this);
	UE_LOG(LogTemp,Warning,TEXT("Number of agents: %i"),NumAgents);
}
