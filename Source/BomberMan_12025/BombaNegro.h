// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bomba.h"
#include "BombaNegro.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_12025_API ABombaNegro : public ABomba
{
	GENERATED_BODY()
	
public:
	ABombaNegro();

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;

protected:

	virtual void Explotar() override;
};
