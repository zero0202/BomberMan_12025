// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoMedusa.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_12025_API AEnemigoMedusa : public AEnemigo
{
	GENERATED_BODY()
	
public:

	AEnemigoMedusa();

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;

	float TiempoTotal;
	float FrecuenciaOndulacion;
	float AmplitudOndulacion;
	FVector DireccionMovimiento;

	void CambiarDireccion();
};
