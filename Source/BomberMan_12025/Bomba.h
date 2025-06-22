// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bomba.generated.h"

UCLASS()
class BOMBERMAN_12025_API ABomba : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABomba();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshBomba;

	float TiempoParaExplotar = 2.0f;
	int RangoExplosion = 3;
	float DistanciaEntreBloques = 300.f;

	FTimerHandle TimerExplosion;

	virtual void Explotar();

};
