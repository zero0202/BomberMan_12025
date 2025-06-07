// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaBloque.h"

// Sets default values
AFabricaBloque::AFabricaBloque()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaBloque::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaBloque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ABloque* AFabricaBloque::CargarBloque(UWorld* Mundo, const FVector& Posicion, const FRotator& Rotacion, EBloqueTipo TipoBloque, int ID)
{
	ABloque* Bloque = CrearBloque(Mundo, Posicion,Rotacion, TipoBloque, ID);

	return Bloque;
}
