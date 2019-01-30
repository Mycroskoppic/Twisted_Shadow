// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Vehicle.h"
#include "VehicleAIController.generated.h"

/**
 * 
 */
UCLASS()
class TWISTED_SHADOW_API AVehicleAIController : public AAIController
{
	GENERATED_BODY()
	
	
public:

	AVehicle* GetControlledVehicle() const;

	virtual void BeginPlay() override;
	
};
