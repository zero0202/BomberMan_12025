// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "IPrototypeBloque.h"
#include "BloqueLadrillo.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_12025_API ABloqueLadrillo : public ABloque, public IIPrototypeBloque
{
	GENERATED_BODY()
public:
	ABloqueLadrillo();

protected:

	virtual void BeginPlay() override;
	UParticleSystemComponent* ParticleSystem;

public:
	virtual void Tick(float DeltaTime) override;

public:

	bool PuedeSubir;
	float velocidad;
	float amplitud;
	float PosicionInicial;

	float dureza = 50;
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) override;

	virtual void MovimientoUnico(float DeltaTime) override;
};
