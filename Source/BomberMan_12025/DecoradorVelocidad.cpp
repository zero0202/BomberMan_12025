// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoradorVelocidad.h"
#include "Engine/Engine.h"
#include "TimerManager.h"

ADecoradorVelocidad::ADecoradorVelocidad()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

void ADecoradorVelocidad::BeginPlay()
{
	Super::BeginPlay();


}

void ADecoradorVelocidad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADecoradorVelocidad::InicializarVelocidad(IIComponente* EnemigoDecorado, float Velocidad, float Duracion)
{
	Inicializa(EnemigoDecorado); 

	VelocidadOriginal = Velocidad;
	DuracionBuff = Duracion;
	NuevaVelocidad = VelocidadOriginal * 2.5f;
	UE_LOG(LogTemp, Warning, TEXT("DecoradorVelocidad activado: Vel=%f, Duracion=%f"), NuevaVelocidad, DuracionBuff);

	// Aplicar velocidad nueva
	ModificarVelocidad(NuevaVelocidad);

	// Iniciar timer para resetear
	GetWorld()->GetTimerManager().SetTimer(	TiempoDecorado, this, &ADecoradorVelocidad::ResetVelocidad, DuracionBuff, false);

}

void ADecoradorVelocidad::ModificarVelocidad(float vel)
{
	if (DecorarEnemigo)
	{
		DecorarEnemigo->ModificarVelocidad(vel);
	}
}

void ADecoradorVelocidad::ResetVelocidad()
{
	UE_LOG(LogTemp, Warning, TEXT("DecoradorVelocidad terminado. Restaurando velocidad normal."), VelocidadOriginal);

	// Restaurar velocidad normal (por ejemplo 600)
	ModificarVelocidad(VelocidadOriginal);
	Destroy();
}
