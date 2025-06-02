// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "IPrototypeBloque.h"
#include "BloqueAcero.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_12025_API ABloqueAcero : public ABloque, public IIPrototypeBloque
{
	GENERATED_BODY()
public:
	ABloqueAcero();

protected:

	virtual void BeginPlay() override;


public:
	virtual void Tick(float DeltaTime) override;

public:

	//float velocidad;	

		// Implementación del patrón Prototype
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) override;

};
