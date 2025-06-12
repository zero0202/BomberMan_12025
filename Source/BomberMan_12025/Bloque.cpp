// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
ABloque::ABloque()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Para la creacion de la malla 
	MeshBloque = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshBloque"));
	MeshBloque->SetupAttachment(RootComponent);
	RootComponent = MeshBloque;

	//Para las particulas
	Particulas = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particulas"));
	Particulas->SetupAttachment(RootComponent);

	// Establecer el tamaño inicial del bloque
	AjustarTamano(FVector(4.0f, 4.0f, 5.0f));

}

// Called when the game starts or when spawned
void ABloque::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void ABloque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (MGrupal)
	{
		MovimientoGrupal(DeltaTime);
	}
	else
	{
		MovimientoUnico(DeltaTime);

	}

}

void ABloque::AjustarTamano(FVector NuevoTamano)
{
	if (MeshBloque)
	{
		MeshBloque->SetWorldScale3D(NuevoTamano);
	}
}
void ABloque::MovimientoUnico(float DeltaTime)
{
}
void ABloque::MovimientoGrupal(float DeltaTime)
{
	FVector Pos = GetActorLocation();

	// Movimiento vertical sincronizado
	float Time = GetWorld()->GetTimeSeconds();
	float AmplitudGlobal = 50.0f;
	float ZOffset = FMath::Sin(Time * 2.0f) * AmplitudGlobal;

	Pos.Z = PosicionInicial.Z + ZOffset;

	SetActorLocation(Pos);

	/* 
	 FVector Pos = GetActorLocation();
    float Desplazamiento = FMath::Sin(GetWorld()->TimeSeconds * 2.0f) * 20.0f;
    Pos.Z += Desplazamiento;
    SetActorLocation(Pos);
	*/
}
void ABloque::SetTipoBloque(EBloqueTipo NuevoTipo)
{
	TipoBloque = NuevoTipo;
}
EBloqueTipo ABloque::GetTipoBloque()
{
	return TipoBloque;
}
int ABloque::GetID()
{
	return IDBloque;
}
/*
ABloque* ABloque::Clonar(UWorld* Mundo, const FVector& Posicion, const FRotator& Rotacion)
{
	return Mundo->SpawnActor<ABloque>(GetClass(), Posicion, Rotacion);;
}

*/