// Fill out your copyright notice in the Description page of Project Settings.


#include "MovimientoCircular.h"

// Sets default values
AMovimientoCircular::AMovimientoCircular()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovimientoCircular::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMovimientoCircular::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMovimientoCircular::Mover(AActor* MonedaActor, float DeltaTime)
{
	Tiempo += DeltaTime;

	FVector Pos = MonedaActor->GetActorLocation();
	Pos.Z += FMath::Sin(Tiempo * 2.f) * 5.f; // flotar suave

	MonedaActor->SetActorLocation(Pos);
}

void AMovimientoCircular::Destruirse()
{
	Destroy();
}

