// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "IPrototypeBloque.h"
#include "BloqueHielo.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_12025_API ABloqueHielo : public ABloque, public IIPrototypeBloque
{
	GENERATED_BODY()
public:
	ABloqueHielo();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;

	FVector PosicionInicial;
	float TiempoMovimiento;


	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) override;
	
};
