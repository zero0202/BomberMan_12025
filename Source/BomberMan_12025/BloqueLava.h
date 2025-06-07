// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "IPrototypeBloque.h"
#include "BloqueLava.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_12025_API ABloqueLava : public ABloque, public IIPrototypeBloque
{
	GENERATED_BODY()
public:
	ABloqueLava();
protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UParticleSystemComponent* ParticulasLava;

	float TiempoLava;
	FVector PosicionInicial;
	bool PMover = true; 
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) override;
	float TiempoMovimiento;
	virtual void MovimientoUnico(float DeltaTime) override;
};
