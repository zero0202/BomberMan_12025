// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bloque.h"
#include "FabricaBloque.generated.h"

UCLASS()
class BOMBERMAN_12025_API AFabricaBloque : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFabricaBloque();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;



	virtual ABloque* CrearBloque(UWorld* Mundo, const FVector& Posicion, const FRotator& Rotacion, EBloqueTipo TipoBloque, int ID) PURE_VIRTUAL(AFabricaBloque::CrearBloque, return nullptr;);
	ABloque* CargarBloque(UWorld* Mundo, const FVector& Posicion, const FRotator& Rotacion, EBloqueTipo TipoBloque, int ID);

	//ABloque* ConstruirBloque(UWorld* Mundo);
};
