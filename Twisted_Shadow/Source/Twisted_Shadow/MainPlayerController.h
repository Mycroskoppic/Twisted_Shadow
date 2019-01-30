// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MainPlayerController.generated.h"

/**
 * 
 */

class AVehicle;


UCLASS()
class TWISTED_SHADOW_API AMainPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	
public:

	AVehicle* GetControlledVehicle() const;
	
	
};
