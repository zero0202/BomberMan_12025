// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IOriginandor.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIOriginandor : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BOMBERMAN_12025_API IIOriginandor
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	
	virtual void GuardarEstado(class IIMemento* SalidaMemento) = 0;

};
