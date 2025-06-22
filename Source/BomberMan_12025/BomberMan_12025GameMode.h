// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Bloque.h"
#include "Enemigo.h"
#include "FabricaBloque.h"
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

	//Para bloque Factory Method
	UPROPERTY()
	TArray<ABloque*> BloquesA; // Guarda todos los bloques generados
	TArray<TArray<int32>> MapaLaberinto;
	TMap<int, ABloque*> MapaBloques;
	void GenerarMapaDesdeCodigo();
	void GenerarLaberinto();
	int TColumnas;
    int TFilas;
	int ID = 0;

	
	ABloque* BloqueRedondo;
	ABloque* BloqueCuadrado;
	AFabricaBloque* FabricaRedondo;
	AFabricaBloque* FabricaCuadrado;

	TArray<ABloque*> TodosLosBloques;
	void MoverTodos(EBloqueTipo Tipo);

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
	void FabricaBloquesMap();
public:
	//para enemigos
	TArray<AEnemigo*> EnemigosA;
	TArray<FVector> PuntosPatrullaLibres;
	void SpawnEnemigos();
	void DecorarEnemigos();
	FTimerHandle TimerD;

	void PosicionarJugadorAleatoriamente();
	FTimerHandle TimerPosicion;

	//Monedas
public:

	class AMoneda* Moneda;
	class AMonedaOro* Oro;
	class AMonedaPlatino* Platino;
	void Monedas();
};



