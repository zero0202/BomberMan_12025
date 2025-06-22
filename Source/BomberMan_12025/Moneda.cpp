// Fill out your copyright notice in the Description page of Project Settings.


#include "Moneda.h"

// Sets default values
AMoneda::AMoneda()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshMoneda = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshMoneda"));
	MeshMoneda->SetupAttachment(RootComponent);
	RootComponent = MeshMoneda;

	
	//Movimiento = nullptr;
}

// Called when the game starts or when spawned
void AMoneda::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMoneda::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Movimiento)
	{
		Movimiento->Mover(this, DeltaTime);
	}
	
}

void AMoneda::SetMovimiento(AActor* NuevoMovimientoA)
{
	// Cast para obtener la interfaz
	Movimiento = Cast<IIMplementacion>(NuevoMovimientoA);

	if (!Movimiento)
	{
		UE_LOG(LogTemp, Error, TEXT("Movimiento no implementa IIMplementacion"));
	}
}

void AMoneda::MostrarDestruccion()
{
	if (Movimiento )
	{
		Movimiento->Destruirse();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se puede destruir: Movimiento invalido"));
	}
}

