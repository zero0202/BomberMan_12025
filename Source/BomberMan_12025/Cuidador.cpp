// Fill out your copyright notice in the Description page of Project Settings.


#include "Cuidador.h"
#include "MementoConcreto.h"
#include "Bloque.h"

// Sets default values
ACuidador::ACuidador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACuidador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACuidador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACuidador::Guardar(ABloque* _originador)
{
    if (_originador)
    {
        if (Memento)
        {
            Memento->Destroy();
            Memento = nullptr;
        }
        Memento = GetWorld()->SpawnActor<AMementoConcreto>(AMementoConcreto::StaticClass());
        _originador->GuardarEstado(Memento);
    }
}

void ACuidador::Cargar(ABloque* _originador)
{
    if (_originador && Memento)
    {
        Memento->RestaurarEstado(_originador);
    }
}

