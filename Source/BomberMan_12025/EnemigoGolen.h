// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoGolen.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_12025_API AEnemigoGolen : public AEnemigo
{
	GENERATED_BODY()
	
public:

	AEnemigoGolen();

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;
private:

	float TiempoTotal;
	float FrecuenciaOndulacion;
	float AmplitudOndulacion;
	FVector DireccionMovimiento;

	void CambiarDireccion();
};
