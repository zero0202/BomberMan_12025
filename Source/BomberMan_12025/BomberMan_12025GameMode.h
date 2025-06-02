// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Bloque.h"
#include "Enemigo.h"
#include "BomberMan_12025GameMode.generated.h"

UCLASS(minimalapi)
class ABomberMan_12025GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABomberMan_12025GameMode();
public:

	virtual void BeginPlay() override;
public:
	//Para bloque
	UPROPERTY()
	TArray<ABloque*> BloquesA; // Guarda todos los bloques generados
	TArray<TArray<int32>> MapaLaberinto;
	void GenerarMapaDesdeCodigo();
	void GenerarLaberinto();

	//FabricaBloques* GenerarBloques();

	//Para clonar bloques
	void ClonarMitadDerechaAHaciaIzquierda();
	ABloque* BuscarBloqueEnPosicion(FVector Posicion);
	float TamanoCelda = 100.0f;

	//para Eliminar bloques
	ABloque* BloqueActual = nullptr;
	FTimerHandle TimerEliminarBloque;
	FTimerHandle TimerInicialBloquesMadera;
	void EliminarBloque();
	void iniciarEliminarBloque();



	//para enemigos
	UPROPERTY()
	TArray<AEnemigo*> EnemigosA;//GUARDA LOS ENEMIGOS 
	TArray<FVector> PuntosPatrullaLibres;
	///void SpawnEnemigos();

	void PosicionarJugadorAleatoriamente();
	FTimerHandle TimerPosicion;
};



