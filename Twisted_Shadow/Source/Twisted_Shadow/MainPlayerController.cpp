// Fill out your copyright notice in the Description page of Project Settings.

#include "MainPlayerController.h"
#include "Vehicle.h"

AVehicle* AMainPlayerController::GetControlledVehicle() const
{
	return Cast<AVehicle>(GetPawn());
}


