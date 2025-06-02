// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "IPrototypeBloque.h"
#include "BloqueHongo.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_12025_API ABloqueHongo : public ABloque, public IIPrototypeBloque
{
	GENERATED_BODY()
public:
	ABloqueHongo();
protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	// Función para detectar colisión con el personaje
	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) override;
	
};
