// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IComponente.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIComponente : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BOMBERMAN_12025_API IIComponente
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void ModificarVelocidad(float Vel) = 0;
};
