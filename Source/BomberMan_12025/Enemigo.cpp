// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "Particles/ParticleSystemComponent.h"
#include "BomberMan_12025GameMode.h"
#include "Kismet/GameplayStatics.h"


AEnemigo::AEnemigo()
{

	PrimaryActorTick.bCanEverTick = true;

	
	MeshEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshEnemigo"));
	MeshEnemigo->SetupAttachment(RootComponent);

	
	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);




}

void AEnemigo::BeginPlay()
{
	Super::BeginPlay();
	GameModeReference = Cast<ABomberMan_12025GameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	
}

void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
bool AEnemigo::EsEspacioLibre(FVector Pos)
{
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
void AEnemigo::AjustarTamano(FVector NuevoTamano)
{
	MeshEnemigo->SetWorldScale3D(NuevoTamano);
}
void AEnemigo::RecibirDanio(float Cantidad)
{

}
void AEnemigo::Morir()
{
}
void AEnemigo::MoverEnemigo(float DeltaTime)
{

}

void AEnemigo::ModificarVelocidad(float Vel)
{
	VelocidadMovimineto = Vel;
	UE_LOG(LogTemp, Warning, TEXT("Nueva velocidad enemigo: %f"), VelocidadMovimineto);
}
