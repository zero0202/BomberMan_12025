// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IMplementacion.h"
#include "Moneda.generated.h"

class UStaticMeshComponent;
class UMaterialInterface;
UCLASS()
class BOMBERMAN_12025_API AMoneda : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMoneda();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:

	IIMplementacion* Movimiento;

	UStaticMeshComponent* MeshMoneda;
	UMaterialInterface* Material;

public:

	float velocidad;
	float tiempo;

	virtual void SetMovimiento(AActor* NuevoMovimiento);
	virtual void MostrarDestruccion();
};
