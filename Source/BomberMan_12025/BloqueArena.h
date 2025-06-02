// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "IPrototypeBloque.h"
#include "BloqueArena.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_12025_API ABloqueArena : public ABloque, public IIPrototypeBloque
{
	GENERATED_BODY()
public:

	ABloqueArena();

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;

protected:

	float velocidadA;
	float Amplitud;
	float Direccion;
	FVector PosicionInicial;

	// Estados de hundimiento y recuperación
	bool PuedeMoverseA;

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
public:
	// Implementación del patrón Prototype
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) const override;
	float TiempoMovimiento;
};
