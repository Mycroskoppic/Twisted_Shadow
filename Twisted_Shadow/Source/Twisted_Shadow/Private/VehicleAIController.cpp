// Fill out your copyright notice in the Description page of Project Settings.

#include "VehicleAIController.h"

AVehicle* AVehicleAIController::GetControlledVehicle() const
{
	return Cast<AVehicle>(GetPawn());
}


void AVehicleAIController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledVehicle = GetControlledVehicle();
	if (!ControlledVehicle) { UE_LOG(LogTemp, Warning, TEXT("AIController not possessing")); }
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController possessing: %s"), *(ControlledVehicle->GetName()))
	}

}

