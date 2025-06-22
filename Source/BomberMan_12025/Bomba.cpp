// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomba.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABomba::ABomba()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshBomba = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshBomba"));
	MeshBomba->SetupAttachment(RootComponent);
	RootComponent = MeshBomba;
}

// Called when the game starts or when spawned
void ABomba::BeginPlay()
{
	Super::BeginPlay();
	
	// Programar la explosión
	GetWorldTimerManager().SetTimer(TimerExplosion, this, &ABomba::Explotar, TiempoParaExplotar, false);

}

// Called every frame
void ABomba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABomba::Explotar()
{
	
}


