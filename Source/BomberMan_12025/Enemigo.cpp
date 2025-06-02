// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "Particles/ParticleSystemComponent.h"
#include "BomberMan_12025GameMode.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEnemigo::AEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Crear el Static Mesh
	MeshEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshEnemigo"));
	MeshEnemigo->SetupAttachment(RootComponent);

	//PARA LA PAERTICULAS
	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
	Super::BeginPlay();
	//GameModeReference = Cast<ABomberMan_12025GameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	
}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
/*
bool AEnemigo::EsEspacioLibre(FVector Pos)
{
	/*
	if (!GameModeReference) return false;

	int32 Col = FMath::RoundToInt(Pos.X / Espaciado);
	int32 Fila = FMath::RoundToInt(Pos.Y / Espaciado);

	if (Fila >= 0 && Fila < GameModeReference->MapaLaberinto.Num()
		&& Col >= 0 && Col < GameModeReference->MapaLaberinto[Fila].Num())
	{
		return GameModeReference->MapaLaberinto[Fila][Col] == 0;
	}

	return false;
	
}
*/
/*
void AEnemigo::AjustarTamano(FVector NuevoTamano)
{
	MeshEnemigo->SetWorldScale3D(NuevoTamano);
}

void AEnemigo::RecibirDanio(float Danio)
{
}

void AEnemigo::Morir()
{
}

void AEnemigo::MoverEnemigo(float DeltaTime)
{
}

*/