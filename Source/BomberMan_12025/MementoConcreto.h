// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IMemento.h"
#include "MementoConcreto.generated.h"

UCLASS()
class BOMBERMAN_12025_API AMementoConcreto : public AActor, public IIMemento
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMementoConcreto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	IIOriginandor* Originador;

public:
	int Vidas;
	virtual void RestaurarEstado(IIOriginandor* _originador) override;
};
