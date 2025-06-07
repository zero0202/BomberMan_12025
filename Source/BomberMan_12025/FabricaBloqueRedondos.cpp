// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaBloqueRedondos.h"
#include "BloqueMadera.h"
#include "BloqueConcreto.h"
#include "BloqueHielo.h"
#include "BloqueHongo.h"
#include "BloquePegajoso.h"
#include "Engine/World.h"
#include "Engine/Engine.h"

AFabricaBloqueRedondos::AFabricaBloqueRedondos()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AFabricaBloqueRedondos::BeginPlay()
{
	Super::BeginPlay();

}

void AFabricaBloqueRedondos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

ABloque* AFabricaBloqueRedondos::CrearBloque(UWorld* Mundo, const FVector& Posicion, const FRotator& Rotacion,EBloqueTipo TipoBloque, int ID)
{
	if (!Mundo) 
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("Mundo es nullptr")));
		
		return nullptr;
	}

	

	switch (TipoBloque)
	{
	case EBloqueTipo::Madera:
		BloqueCreado = Mundo->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), Posicion, Rotacion);
		break;

	case EBloqueTipo::Concreto:
		BloqueCreado = Mundo->SpawnActor<ABloqueConcreto>(ABloqueConcreto::StaticClass(), Posicion, Rotacion);
		break;

	case EBloqueTipo::Hielo:
		BloqueCreado = Mundo->SpawnActor<ABloqueHielo>(ABloqueHielo::StaticClass(), Posicion, Rotacion);
		break;

	case EBloqueTipo::Pegajoso:
		BloqueCreado = Mundo->SpawnActor<ABloquePegajoso>(ABloquePegajoso::StaticClass(), Posicion, Rotacion);
		break;

	case EBloqueTipo::Hongo:
		BloqueCreado = Mundo->SpawnActor<ABloqueHongo>(ABloqueHongo::StaticClass(), Posicion, Rotacion);
		break;

	default:
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("No reconocido el bloque")));
		return nullptr;
	}

	if (BloqueCreado)
	{
		BloqueCreado->IDBloque = ID;
	}

	return BloqueCreado;
}
