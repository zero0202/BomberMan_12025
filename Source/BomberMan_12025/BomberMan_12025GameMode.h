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
	int32 TColumnas;
    int32 TFilas;

	void GenerarLaberinto();

	//FabricaBloques* GenerarBloques();

	//Para clonar bloques
	void Prototipos();
	TMap<int, AActor*> MapaPrototipos;
	void ClonarBloques(int32 InTFilas, int32 InTColumnas);

	//para Eliminar bloques
	ABloque* BloqueActual = nullptr;
	FTimerHandle TimerEliminarBloque;
	FTimerHandle TimerInicialBloquesMadera;
	void EliminarBloque();
	void iniciarEliminarBloque();

	TArray<AEnemigo*> EnemigosA;//GUARDA LOS ENEMIGOS 
	TArray<FVector> PuntosPatrullaLibres;
	///void SpawnEnemigos();

	void PosicionarJugadorAleatoriamente();
	FTimerHandle TimerPosicion;
};



