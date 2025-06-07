// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabricaBloque.h"
#include "FabricaBloqueRedondos.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_12025_API AFabricaBloqueRedondos : public AFabricaBloque
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	AFabricaBloqueRedondos();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	virtual ABloque* CrearBloque(UWorld* Mundo, const FVector& Posicion, const FRotator& Rotacion, EBloqueTipo, int ID) override;

	
};
