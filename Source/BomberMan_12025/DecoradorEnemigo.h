// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IComponente.h"
#include "DecoradorEnemigo.generated.h"

UCLASS()
class BOMBERMAN_12025_API ADecoradorEnemigo : public AActor, public IIComponente
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADecoradorEnemigo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	IIComponente* DecorarEnemigo;
public:
	void Inicializa(IIComponente* EnemigoDecorado);
	virtual void ModificarVelocidad(float Vel) override;
};
