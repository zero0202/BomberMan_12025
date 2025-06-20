// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoradorEnemigo.h"
#include "Engine/World.h"	
#include "Engine/Engine.h"


// Sets default values
ADecoradorEnemigo::ADecoradorEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

	if (DecorarEnemigo)
	{
		UE_LOG(LogTemp, Warning, TEXT("Enemigo decorado"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Error al inicializar DecorarEnemigo."));
	}
}

void ADecoradorEnemigo::ModificarVelocidad(float Vel)
{

	if (DecorarEnemigo)
	{
		DecorarEnemigo->ModificarVelocidad(Vel);
		UE_LOG(LogTemp, Warning, TEXT("Velocidad modificada "), Vel);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("DecorarEnemigo no inicializado."));
	}
}

