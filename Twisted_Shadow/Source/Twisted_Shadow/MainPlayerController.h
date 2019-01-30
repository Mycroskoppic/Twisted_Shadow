// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Vehicle.h"
#include "MainPlayerController.generated.h"

/**
 * 
 */




UCLASS()
class TWISTED_SHADOW_API AMainPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	
public:

	AVehicle* GetControlledVehicle() const;
	
	virtual void BeginPlay() override;
	
};
