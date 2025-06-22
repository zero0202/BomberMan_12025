// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IMplementacion.h"
#include "MovimientoCircular.generated.h"

UCLASS()
class BOMBERMAN_12025_API AMovimientoCircular : public AActor, public IIMplementacion
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovimientoCircular();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	float Tiempo;
	virtual void Mover(class AActor* MonedaActor, float DeltaTime) override;
	virtual void Destruirse() override;
};
