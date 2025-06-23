// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IComand.h"
#include "BomberMan_12025Character.h"
#include "BombaNegro.h"
#include "BombaNegraConcreta.generated.h"

UCLASS()
class BOMBERMAN_12025_API ABombaNegraConcreta : public AActor, public IIComand
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABombaNegraConcreta();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	ABomberMan_12025Character* Receiver;

public:
	void SetReceptor(ABomberMan_12025Character* InReceiver);
	
	virtual void Ejecutar() override;
};
