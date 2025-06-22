// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Moneda.h"
#include "MonedaPlatino.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_12025_API AMonedaPlatino : public AMoneda
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AMonedaPlatino();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
