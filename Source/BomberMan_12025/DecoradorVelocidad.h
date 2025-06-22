// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DecoradorEnemigo.h"
#include "DecoradorVelocidad.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_12025_API ADecoradorVelocidad : public ADecoradorEnemigo
{
	GENERATED_BODY()

public:

	ADecoradorVelocidad();

protected:

	virtual void BeginPlay() override;

private:
	FTimerHandle TiempoDecorado;
	float VelocidadOriginal;
	float NuevaVelocidad;
	float DuracionBuff;

public:

	virtual void Tick(float DeltaTime) override;


	void InicializarVelocidad(IIComponente* EnemigoDecorado, float Velocidad, float Duracion);
	void ModificarVelocidad(float vel) override;
private:
	void ResetVelocidad();
};
