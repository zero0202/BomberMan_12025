// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IComand.h"
#include "Emisor.generated.h"

UCLASS()
class BOMBERMAN_12025_API AEmisor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEmisor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:

	IIComand* Command;
public:
	void SetCommand(AActor* InCommand);
	void EjecutarComando();
	
};
