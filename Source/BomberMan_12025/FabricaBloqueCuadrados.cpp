// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaBloqueCuadrados.h"
#include "BloqueAcero.h"
#include "BloqueLadrillo.h"
#include "BloqueArena.h"
#include "BloqueLava.h"
#include "BloqueElectrico.h"

AFabricaBloqueCuadrados::AFabricaBloqueCuadrados()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Aquí podrías inicializar cualquier propiedad específica de la fábrica de bloques cuadrados
	// Por ejemplo, podrías establecer un tipo de material o una textura por defecto
}

void AFabricaBloqueCuadrados::BeginPlay()
{
	Super::BeginPlay();

}

void AFabricaBloqueCuadrados::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

ABloque* AFabricaBloqueCuadrados::CrearBloque(UWorld* Mundo, const FVector& Posicion, const FRotator& Rotacion, EBloqueTipo TipoBloque, int ID)
{
	if (!Mundo)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("Mundo es nullptr")));
		return nullptr;
	}
		

	switch (TipoBloque)
	{
	case EBloqueTipo::Acero:
		BloqueCreadoR = Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), Posicion, Rotacion);
		break;

	case EBloqueTipo::Ladrillo:
		BloqueCreadoR = Mundo->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), Posicion, Rotacion);
		break;

	case EBloqueTipo::Lava:
		BloqueCreadoR = Mundo->SpawnActor<ABloqueLava>(ABloqueLava::StaticClass(), Posicion, Rotacion);
		break;

	case EBloqueTipo::Arena:
		BloqueCreadoR = Mundo->SpawnActor<ABloqueArena>(ABloqueArena::StaticClass(), Posicion, Rotacion);
		break;

	case EBloqueTipo::Electrico:
		BloqueCreadoR = Mundo->SpawnActor<ABloqueElectrico>(ABloqueElectrico::StaticClass(), Posicion, Rotacion);
		break;

	default:
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("Bloque no reconocido")));

		return nullptr;
	}

	if (BloqueCreadoR)
	{
		BloqueCreadoR->IDBloque = ID;
	}

	return BloqueCreadoR;
}


