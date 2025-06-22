// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoradorEnemigo.h"
#include "Engine/World.h"	
#include "Engine/Engine.h"


// Sets default values
ADecoradorEnemigo::ADecoradorEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	DecorarEnemigo = nullptr;
}

// Called when the game starts or when spawned
void ADecoradorEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADecoradorEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADecoradorEnemigo::Inicializa(IIComponente* EnemigoDecorado)
{
	DecorarEnemigo = EnemigoDecorado;

}

void ADecoradorEnemigo::ModificarVelocidad(float Vel)
{

	if (DecorarEnemigo)
	{
		DecorarEnemigo->ModificarVelocidad(Vel);
	}
}

