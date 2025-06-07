// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "IPrototypeBloque.h"
#include "BloqueConcreto.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_12025_API ABloqueConcreto : public ABloque, public IIPrototypeBloque
{
	GENERATED_BODY()
public:

	ABloqueConcreto();

protected:

	virtual void BeginPlay() override;
	UParticleSystemComponent* ParticleSystem;

public:

	virtual void Tick(float DeltaTime) override;
public:
	bool bPuedeGirar;
	float RotationSpeed;

	float dureza = 80;
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) override;
	virtual void MovimientoUnico(float DeltaTime) override;
};
