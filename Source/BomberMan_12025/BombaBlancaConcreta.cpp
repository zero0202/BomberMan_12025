// Fill out your copyright notice in the Description page of Project Settings.


#include "BombaBlancaConcreta.h"

// Sets default values
ABombaBlancaConcreta::ABombaBlancaConcreta()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABombaBlancaConcreta::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABombaBlancaConcreta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABombaBlancaConcreta::SetReceptor(ABomberMan_12025Character* InReceiver)
{
	Receiver = InReceiver;
}

void ABombaBlancaConcreta::Ejecutar()
{
	if (Receiver)
	{
		Receiver->ColocarBombaBlanca();
	}
}

