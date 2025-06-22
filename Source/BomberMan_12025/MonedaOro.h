// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Moneda.h"
#include "MonedaOro.generated.h"

/**
 * 
 */
class UStaticMesh;
class UMaterialInterface;
class USceneComponent;
UCLASS()
class BOMBERMAN_12025_API AMonedaOro : public AMoneda
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AMonedaOro();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


};
