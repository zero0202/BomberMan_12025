// Fill out your copyright notice in the Description page of Project Settings.


#include "BombaNegraConcreta.h"

// Sets default values
ABombaNegraConcreta::ABombaNegraConcreta()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABombaNegraConcreta::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABombaNegraConcreta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABombaNegraConcreta::SetReceptor(ABomberMan_12025Character* InReceiver)
{
	Receiver = InReceiver;
}

void ABombaNegraConcreta::Ejecutar()
{
	if (Receiver)
	{
		Receiver->ColocarBombaNegra();
	}
}

