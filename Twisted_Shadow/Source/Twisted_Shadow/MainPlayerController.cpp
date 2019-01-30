// Fill out your copyright notice in the Description page of Project Settings.

#include "MainPlayerController.h"

AVehicle* AMainPlayerController::GetControlledVehicle() const
{
	return Cast<AVehicle>(GetPawn());
}


void AMainPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledVehicle = GetControlledVehicle();
	if (!ControlledVehicle) { UE_LOG(LogTemp, Warning, TEXT("PlayerController not possessing")); }
	else 
	{ 
		UE_LOG(LogTemp, Warning, TEXT("PlayerController possessing: %s"), *(ControlledVehicle->GetName()))
	}
	
}

