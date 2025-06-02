// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan_12025GameMode.h"
#include "BomberMan_12025Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
#include "Engine/Engine.h"
#include "Bloque.h"
#include "BloqueAcero.h"
#include "BloqueMadera.h"
#include "BloqueLadrillo.h"
#include "BloqueConcreto.h"
#include "BloqueArena.h"
#include "BloqueLava.h"
#include "BloqueElectrico.h"
#include "BloquePegajoso.h"
#include "BloqueHielo.h"
#include "BloqueHongo.h"
#include "IPrototypeBloque.h"

ABomberMan_12025GameMode::ABomberMan_12025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
void ABomberMan_12025GameMode::BeginPlay()
{
    Super::BeginPlay();
    /*
        // Mapa del laberinto:
       // 0 = vacío, 1 = madera, 2 = ladrillo, 3 = concreto, 4 = acero 5 = lava, 6 = arena, 7 = electrico, 8 = pegajoso, 9 = hielo, 10 = hongo
        MapaLaberinto = {
    {4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
    {4,0,0,0,0,4,0,1,1,0,0,4,0,1,0,4,0,0,0,1,0,0,1,0,4,4,0,0,0,0,4,0,7,7,0,0,4,0,7,0,4,0,0,0,7,0,7,7,0,4},
    {4,0,4,4,4,4,0,2,4,4,0,4,0,0,0,4,2,4,0,1,0,0,2,0,4,4,0,4,4,4,4,0,2,4,4,0,4,0,0,0,4,2,4,0,7,0,0,2,0,4},
    {4,0,4,0,0,0,0,4,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,0,4,4,0,4,0,0,0,0,4,0,0,0,0,0,0,0,0,0,1,0,0,7,7,7,0,4},
    {4,0,4,0,1,1,1,1,0,1,0,4,4,4,4,0,0,0,0,0,0,0,2,0,4,4,0,4,0,1,1,1,1,0,1,0,4,4,4,4,0,0,0,0,0,0,0,2,0,4},
    {4,0,4,0,1,0,0,0,0,0,4,0,2,0,4,4,2,4,2,0,1,1,1,0,4,4,0,4,0,1,0,0,0,0,0,4,0,2,0,4,4,2,4,2,0,8,8,8,0,4},
    {4,2,4,4,2,4,4,0,2,4,4,0,1,0,2,0,0,4,2,0,1,0,0,0,4,4,2,4,4,2,4,4,0,2,4,4,0,1,0,2,0,0,4,2,0,1,0,0,0,4},
    {4,0,1,0,0,0,2,0,4,0,1,0,0,0,4,0,0,1,1,1,1,1,1,0,4,4,0,1,0,0,0,2,0,4,0,1,0,0,0,4,0,0,9,9,9,9,9,9,0,4},
    {4,0,4,2,4,4,4,2,2,0,1,1,1,0,2,0,1,1,1,0,0,0,1,0,4,4,0,4,2,4,4,4,2,2,0,1,1,1,0,2,0,9,9,10,0,0,0,1,0,4},
    {4,0,1,0,2,0,2,4,4,0,0,0,2,0,4,0,0,1,0,0,1,0,2,0,4,4,0,1,0,2,0,2,4,4,0,0,0,2,0,4,0,0,9,0,0,1,0,2,0,4},
    {4,2,4,0,1,0,1,0,1,0,1,0,1,0,4,0,0,1,0,0,1,0,1,0,4,4,2,4,0,1,0,1,0,1,0,1,0,1,0,4,0,0,1,0,0,1,0,1,0,4},
    {4,0,4,0,0,0,2,0,0,0,1,0,0,0,4,4,4,4,2,0,1,1,1,0,4,4,0,4,0,0,0,2,0,0,0,1,0,0,0,4,4,4,4,2,0,1,1,1,0,4},
    {4,0,4,0,1,1,0,1,1,1,1,0,0,0,0,0,1,0,0,4,0,0,0,0,4,4,0,4,0,1,1,0,1,1,1,1,0,0,0,0,0,1,0,0,4,0,0,0,0,4},
    {4,0,0,0,2,0,4,0,4,0,0,0,0,3,4,4,4,0,1,1,1,1,1,0,4,4,0,0,0,2,0,4,0,4,0,0,0,0,3,4,4,4,0,1,1,1,1,1,0,4},
    {4,2,0,0,1,0,4,0,4,0,1,0,0,0,0,4,0,0,0,2,4,0,1,0,4,4,2,0,0,1,0,4,0,4,0,1,0,0,0,0,4,0,0,0,2,4,0,1,0,4},
    {4,0,4,0,1,0,4,0,0,0,1,0,4,4,0,1,0,1,0,0,0,0,1,0,4,4,0,4,0,1,0,4,0,0,0,1,0,4,4,0,1,0,1,0,0,0,0,1,0,4},
    {4,0,1,1,1,0,1,1,1,0,1,1,1,0,0,1,0,2,2,2,2,0,4,4,4,4,0,1,1,1,0,1,1,1,0,1,1,1,0,0,1,0,2,2,2,2,0,4,4,4},
    {4,0,1,0,2,0,0,0,1,0,0,0,2,0,0,4,4,4,0,4,4,4,4,0,4,4,0,1,0,2,0,0,0,1,0,0,0,2,0,0,4,4,4,0,4,4,4,4,0,4},
    {4,0,1,0,1,0,1,0,1,0,1,0,1,0,0,4,0,0,0,2,4,2,4,0,4,4,0,1,0,1,0,1,0,1,0,1,0,1,0,0,4,0,0,0,2,4,2,4,0,4},
    {4,0,1,0,4,0,2,0,1,1,1,0,0,0,0,4,0,1,1,0,0,0,4,0,4,4,0,1,0,4,0,2,0,1,1,1,0,0,0,0,4,0,1,1,0,0,0,4,0,4},
    {4,0,1,0,4,0,1,0,0,0,1,1,1,0,0,0,0,1,0,0,2,0,4,0,4,4,0,1,0,4,0,1,0,0,0,1,1,1,0,0,0,0,1,0,0,2,0,4,0,4},
    {4,0,4,4,4,0,3,4,4,0,4,4,2,4,2,4,4,2,0,1,1,0,2,4,4,4,0,4,4,4,0,3,4,4,0,4,4,2,4,2,4,4,2,0,1,1,0,2,4,4},
    {4,2,4,0,2,0,1,0,1,0,4,4,1,0,0,1,0,1,1,0,0,0,0,0,4,4,2,4,0,2,0,1,0,1,0,4,4,1,0,0,1,0,1,1,0,0,0,0,0,4},
    {4,0,1,0,1,0,2,0,1,0,4,0,0,0,4,0,0,1,0,0,0,0,1,0,4,4,0,1,0,1,0,2,0,1,0,4,0,0,0,4,0,0,1,0,0,0,0,1,0,4},
    {4,0,2,0,4,0,4,0,4,4,4,0,2,0,4,2,4,1,0,2,2,4,4,0,4,4,0,2,0,4,0,4,0,4,4,4,0,2,0,4,2,4,1,0,2,2,4,4,0,4},
    {4,2,4,0,4,0,1,0,1,0,4,4,0,0,1,0,2,0,1,0,4,2,2,0,4,4,2,4,0,4,0,1,0,1,0,4,4,0,0,1,0,2,0,1,0,4,2,2,0,4},
    {4,0,4,0,2,0,0,4,0,0,0,2,2,0,1,0,0,4,4,4,0,1,1,0,4,4,0,4,0,2,0,0,4,0,0,0,2,2,0,1,0,0,4,4,4,0,1,1,0,4},
    {4,0,4,0,4,0,0,2,2,0,0,0,0,0,1,0,0,4,0,4,0,0,1,0,4,4,0,4,0,4,0,0,2,2,0,0,0,0,0,1,0,0,4,0,4,0,0,1,0,4},
    {4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
    {4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
    {4,0,0,0,0,4,0,1,1,0,0,4,0,1,0,4,0,0,0,1,0,0,1,0,4,4,0,0,0,0,4,0,1,1,0,0,4,0,1,0,4,0,0,0,1,0,0,1,0,4},
    {4,0,4,4,4,4,0,2,4,4,0,4,0,0,0,4,2,4,0,1,0,0,2,0,4,4,0,4,4,4,4,0,2,4,4,0,4,0,0,0,4,2,4,0,1,0,0,2,0,4},
    {4,0,4,0,0,0,0,4,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,0,4,4,0,4,0,0,0,0,4,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,0,4},
    {4,0,4,0,1,1,1,1,0,1,0,4,4,4,4,0,0,0,0,0,0,0,2,0,4,4,0,4,0,1,1,1,1,0,1,0,4,4,4,4,0,0,0,0,0,0,0,2,0,4},
    {4,0,4,0,1,0,0,0,0,0,4,0,2,0,4,4,2,4,2,0,1,1,1,0,4,4,0,4,0,1,0,0,0,0,0,4,0,2,0,4,4,2,4,2,0,1,1,1,0,4},
    {4,2,4,4,2,4,4,0,2,4,4,0,1,0,2,0,0,4,2,0,1,0,0,0,4,4,2,4,4,2,4,4,0,2,4,4,0,1,0,2,0,0,4,2,0,1,0,0,0,4},
    {4,0,1,0,0,0,2,0,4,0,1,0,0,0,4,0,0,1,1,1,1,1,1,0,4,4,0,1,0,0,0,2,0,4,0,1,0,0,0,4,0,0,1,1,1,1,1,1,0,4},
    {4,0,4,2,4,4,4,2,2,0,1,1,1,0,2,0,1,1,1,0,0,0,1,0,4,4,0,4,2,4,4,4,2,2,0,1,1,1,0,2,0,1,1,1,0,0,0,1,0,4},
    {4,0,1,0,2,0,2,4,4,0,0,0,2,0,4,0,0,1,0,0,1,0,2,0,4,4,0,1,0,2,0,2,4,4,0,0,0,2,0,4,0,0,1,0,0,1,0,2,0,4},
    {4,2,4,0,1,0,1,0,1,0,1,0,1,0,4,0,0,1,0,0,1,0,1,0,4,4,2,4,0,1,0,1,0,1,0,1,0,1,0,4,0,0,1,0,0,1,0,1,0,4},
    {4,0,4,0,0,0,2,0,0,0,1,0,0,0,4,4,4,4,2,0,1,1,1,0,4,4,0,4,0,0,0,2,0,0,0,1,0,0,0,4,4,4,4,2,0,1,1,1,0,4},
    {4,0,4,0,1,1,0,1,1,1,1,0,0,0,0,0,1,0,0,4,0,0,0,0,4,4,0,4,0,1,1,0,1,1,1,1,0,0,0,0,0,1,0,0,4,0,0,0,0,4},
    {4,0,0,0,2,0,4,0,4,0,0,0,0,3,4,4,4,0,1,1,1,1,1,0,4,4,0,0,0,2,0,4,0,4,0,0,0,0,3,4,4,4,0,1,1,1,1,1,0,4},
    {4,2,0,0,1,0,4,0,4,0,1,0,0,0,0,4,0,0,0,2,4,0,1,0,4,4,2,0,0,1,0,4,0,4,0,1,0,0,0,0,4,0,0,0,2,4,0,1,0,4},
    {4,0,4,0,1,0,4,0,0,0,1,0,4,4,0,1,0,1,0,0,0,0,1,0,4,4,0,4,0,1,0,4,0,0,0,1,0,4,4,0,1,0,1,0,0,0,0,1,0,4},
    {4,0,1,1,1,0,1,1,1,0,1,1,1,0,0,1,0,2,2,2,2,0,4,4,4,4,0,1,1,1,0,1,1,1,0,1,1,1,0,0,1,0,2,2,2,2,0,4,4,4},
    {4,0,1,0,2,0,0,0,1,0,0,0,2,0,0,4,4,4,0,4,4,4,4,0,4,4,0,1,0,2,0,0,0,1,0,0,0,2,0,0,4,4,4,0,4,4,4,4,0,4},
    {4,0,1,0,1,0,1,0,1,0,1,0,1,0,0,4,0,0,0,2,4,2,4,0,4,4,0,1,0,1,0,1,0,1,0,1,0,1,0,0,4,0,0,0,2,4,2,4,0,4},
    {4,0,1,0,4,0,2,0,1,1,1,0,0,0,0,4,0,1,1,0,0,0,0,0,4,4,0,1,0,4,0,2,0,1,1,1,0,0,0,0,4,0,1,1,0,0,0,4,0,4},
    {4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4}
    };
    */
    GenerarMapaDesdeCodigo();
    GenerarLaberinto();
    ClonarBloques(TFilas, TColumnas);

    //para posicionar aleatoriamente al jugador luego de generar el laberinto
    GetWorld()->GetTimerManager().SetTimer(TimerPosicion, this, &ABomberMan_12025GameMode::PosicionarJugadorAleatoriamente, 0.1f, false);

}
void ABomberMan_12025GameMode::GenerarMapaDesdeCodigo()
{
    int Columnas = 20;
    int Filas = 20;

    TColumnas = Columnas + 1;
    TFilas = Filas + 1;
    int Y;
    int X;
    //inicializamos la matriz
    MapaLaberinto.SetNum(TFilas);
    for (Y = 0; Y < TFilas; Y++)
    {
        MapaLaberinto[Y].SetNum(TColumnas);
        for (X = 0; X < TColumnas; X++)
        {
            int Mitad = TColumnas / 2;
            // Solo trabajar desde la mitad hacia la derecha
            if (X >= Mitad)
            {
                // Bordes verticales y horizontales pero solo en esa mitad
                if (X == Mitad || X == TColumnas - 1 || Y == 0 || Y == TFilas - 1)
                {
                    MapaLaberinto[Y][X] = 1; // Acero
                }
                else
                {
                    MapaLaberinto[Y][X] = -1; // Celda vacia 
                }
            }
            else
            {
                MapaLaberinto[Y][X] = -2; // No se usa (izquierda)
            }
        }
    }
    // Laberinto tipo "DFS" solo en la mitad derecha
    TSet<FIntPoint> Visitadas;
    TArray<FIntPoint> Pila;
    auto Direcciones = { FIntPoint(0, -2), FIntPoint(0, 2), FIntPoint(-2, 0), FIntPoint(2, 0) };

    auto Valido = [&](int X, int Y) -> bool
        {
            return X > Columnas / 2 && Y > 0 && X < Columnas && Y < Filas;
        };

    FIntPoint Inicio(Columnas / 2 + 1, 1); // Inicio en la mitad derecha
    Pila.Push(Inicio);
    MapaLaberinto[Inicio.Y][Inicio.X] = 0;
    Visitadas.Add(Inicio);

    while (Pila.Num() > 0)
    {
        FIntPoint Actual = Pila.Top();
        TArray<FIntPoint> Vecinos;

        for (FIntPoint Dir : Direcciones)
        {
            FIntPoint Nuevo = Actual + Dir;
            if (Valido(Nuevo.X, Nuevo.Y) && !Visitadas.Contains(Nuevo))
            {
                Vecinos.Add(Nuevo);
            }
        }

        if (Vecinos.Num() > 0)
        {
            FIntPoint Elegido = Vecinos[FMath::RandRange(0, Vecinos.Num() - 1)];
            int MidX = (Actual.X + Elegido.X) / 2;
            int MidY = (Actual.Y + Elegido.Y) / 2;

            MapaLaberinto[Elegido.Y][Elegido.X] = 0;
            MapaLaberinto[MidY][MidX] = 0;

            Pila.Push(Elegido);
            Visitadas.Add(Elegido);
        }
        else
        {
            Pila.Pop();
        }
    }

    // Rellenar las celdas restantes en la mitad derecha con bloques aleatorios
    for (Y = 1; Y < TFilas - 1; Y++)
    {
        for (X = Columnas / 2 + 1; X < TColumnas - 1; X++)
        {
            if (MapaLaberinto[Y][X] == -1)
            {
                MapaLaberinto[Y][X] = FMath::RandRange(2, 10); 
            }
        }
    }

    // Entrada y salida opcionales (solo si están en la mitad derecha)
    MapaLaberinto[1][Columnas / 2] = 0; // Entrada a la mitad derecha
    MapaLaberinto[TFilas - 2][TColumnas - 2] = 0; // Salida cerca del borde derecho
}

void ABomberMan_12025GameMode::GenerarLaberinto()
{

    float Espaciado = 400.0f;

    //las filas y columnas se estan creando directamente se derivan automaticamente 
    // El tamaño lo decide el contenido del array.
    //puedo hacer un laberinto más grande o más pequeño solo cambiando el array, sin tocar nada más del código

    // Recorre cada fila del mapa del laberinto (eje Y)
    for (int Y = 0; Y < MapaLaberinto.Num(); ++Y)
    {
        // Recorre cada columna dentro de la fila actual (eje X)
        for (int X = 0; X < MapaLaberinto[Y].Num(); ++X)
        {
            // Obtiene el tipo de bloque que hay en la posición (Y, X)
            int Tipo = MapaLaberinto[Y][X];

            // Si el tipo es 0, se considera espacio vacío y no se genera nada
            if (Tipo == 0) {

                FVector PosicionLibre = FVector(X * Espaciado, Y * Espaciado, 0.0f); // ajusta altura si deseas
                PuntosPatrullaLibres.Add(PosicionLibre);
                continue;



            }

            //creacion directamente desde que se genera x y y, en la pocion 0 0 0 por defecto
            FVector Posicion = FVector(X * Espaciado, Y * Espaciado, 0.0f);
            FRotator Rotacion = FRotator::ZeroRotator;
            TSubclassOf<AActor> ClaseBloque = nullptr;

            switch (Tipo)
            {
            case 1: ClaseBloque = ABloqueAcero::StaticClass(); break;
            case 2: ClaseBloque = ABloqueLadrillo::StaticClass(); break;
            case 3: ClaseBloque = ABloqueConcreto::StaticClass(); break;
            case 4: ClaseBloque = ABloqueMadera::StaticClass(); break;
            case 5: ClaseBloque = ABloqueLava::StaticClass(); break;
            case 6: ClaseBloque = ABloqueArena::StaticClass(); break;
            case 7: ClaseBloque = ABloqueElectrico::StaticClass(); break;
            case 8: ClaseBloque = ABloquePegajoso::StaticClass(); break;
            case 9: ClaseBloque = ABloqueHielo::StaticClass(); break;
            case 10: ClaseBloque = ABloqueHongo::StaticClass(); break;
            default: break;
            }

            if (ClaseBloque)
            {
                ABloque* BloqueSpawned = GetWorld()->SpawnActor<ABloque>(ClaseBloque, Posicion, Rotacion);
                if (BloqueSpawned)
                {

                    BloquesA.Add(BloqueSpawned); // Guarda el bloque en un array para acceso futuro
                }
            }
        }
    }

}

void ABomberMan_12025GameMode::ClonarBloques(int32 InTFilas, int32 InTColumnas)
{
    float TamanioCelda = 400.f; 

    int Mitad = TColumnas / 2;

    // Recorremos solo la mitad derecha para clonar hacia la izquierda
    for (int Y = 0; Y < TFilas; Y++)
    {
        for (int X = Mitad; X < TColumnas; X++)
        {
            int TipoBloque = MapaLaberinto[Y][X];

            if (TipoBloque <= 0) continue; // Ignorar celdas vacías

            FVector PosOriginal = FVector(X * TamanioCelda, Y * TamanioCelda, 40.f);
            FVector PosClonada = FVector((Mitad - (X - Mitad + 1)) * TamanioCelda, Y * TamanioCelda, 40.f);

            AActor* Clon = nullptr;

            switch (TipoBloque)
            {
            case 1: // Acero
            {
                TArray<AActor*> AceroRefs;
                UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABloqueAcero::StaticClass(), AceroRefs);
                if (AceroRefs.Num() > 0)
                {
                    ABloqueAcero* Prototipo = Cast<ABloqueAcero>(AceroRefs[0]);
                    Clon = Prototipo->Clonar(GetWorld(), PosClonada);
                }
                break;
            }
            case 2: // Ladrillo
            {
                TArray<AActor*> LadrilloRefs;
                UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABloqueLadrillo::StaticClass(), LadrilloRefs);
                if (LadrilloRefs.Num() > 0)
                {
                    ABloqueLadrillo* Prototipo = Cast<ABloqueLadrillo>(LadrilloRefs[0]);
                    Clon = Prototipo->Clonar(GetWorld(), PosClonada);
                }
                break;
            }
            case 3: // Madera
            {
                TArray<AActor*> MaderaRefs;
                UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABloqueMadera::StaticClass(), MaderaRefs);
                if (MaderaRefs.Num() > 0)
                {
                    ABloqueMadera* Prototipo = Cast<ABloqueMadera>(MaderaRefs[0]);
                    Clon = Prototipo->Clonar(GetWorld(), PosClonada);
                }
                break;
            }
			case 4: // Concreto
            {
                TArray<AActor*> ConcretoRefs;
                UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABloqueConcreto::StaticClass(), ConcretoRefs);
                if (ConcretoRefs.Num() > 0)
                {
                    ABloqueConcreto* Prototipo = Cast<ABloqueConcreto>(ConcretoRefs[0]);
                    Clon = Prototipo->Clonar(GetWorld(), PosClonada);
                }
                break;
            }
            case 5: 
            {
                TArray<AActor*> LavaRefs;
                UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABloqueLava::StaticClass(), LavaRefs);
                if (LavaRefs.Num() > 0)
                {
                    ABloqueLava* Prototipo = Cast<ABloqueLava>(LavaRefs[0]);
                    Clon = Prototipo->Clonar(GetWorld(), PosClonada);
                }
                break;
            }
            case 6: 
            {
                TArray<AActor*> PegajosoRefs;
                UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABloquePegajoso::StaticClass(), PegajosoRefs);
                if (PegajosoRefs.Num() > 0)
                {
                    ABloquePegajoso* Prototipo = Cast<ABloquePegajoso>(PegajosoRefs[0]);
                    Clon = Prototipo->Clonar(GetWorld(), PosClonada);
                }
                break;
            }
            case 7: 
            {
                TArray<AActor*> HieloRefs;
                UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABloqueHielo::StaticClass(), HieloRefs);
                if (HieloRefs.Num() > 0)
                {
                    ABloqueHielo* Prototipo = Cast<ABloqueHielo>(HieloRefs[0]);
                    Clon = Prototipo->Clonar(GetWorld(), PosClonada);
                }
                break;
            }
            case 8: 
            {
                TArray<AActor*> HongoRefs;
                UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABloqueHongo::StaticClass(), HongoRefs);
                if (HongoRefs.Num() > 0)
                {
                    ABloqueHongo* Prototipo = Cast<ABloqueHongo>(HongoRefs[0]);
                    Clon = Prototipo->Clonar(GetWorld(), PosClonada);
                }
                break;
            }
            case 9: 
            {
                TArray<AActor*> ArenaRefs;
                UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABloqueArena::StaticClass(), ArenaRefs);
                if (ArenaRefs.Num() > 0)
                {
                    ABloqueArena* Prototipo = Cast<ABloqueArena>(ArenaRefs[0]);
                    Clon = Prototipo->Clonar(GetWorld(), PosClonada);
                }
                break;
            }
            case 10:
            {
                TArray<AActor*> ElectricoRefs;
                UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABloqueElectrico::StaticClass(), ElectricoRefs);
                if (ElectricoRefs.Num() > 0)
                {
                    ABloqueElectrico* Prototipo = Cast<ABloqueElectrico>(ElectricoRefs[0]);
                    Clon = Prototipo->Clonar(GetWorld(), PosClonada);
                }
                break;
            }
            }

            if (Clon)
            {
                // Opcional: marca o guarda referencia del clon si quieres gestionarlos luego
            }
        }
    }
}
void ABomberMan_12025GameMode::EliminarBloque()
{

    TArray<ABloque*> BloquesMadera;

    for (ABloque* Bloque : BloquesA)
    {
        if (Bloque && Bloque->IsA(ABloqueMadera::StaticClass()))
        {
            BloquesMadera.Add(Bloque);
        }
    }

    if (BloquesMadera.Num() > 0)
    {
        int32 Aleatorio = FMath::RandRange(0, BloquesMadera.Num() - 1);
        BloqueActual = BloquesMadera[Aleatorio];

        if (BloqueActual)
        {
            BloqueActual->Destroy();
            BloquesA.Remove(BloqueActual);
        }
    }
   
}

void ABomberMan_12025GameMode::iniciarEliminarBloque()
{
    // Iniciar el temporizador para eliminar bloques
    GetWorld()->GetTimerManager().SetTimer(TimerEliminarBloque, this, &ABomberMan_12025GameMode::EliminarBloque, 3.0f, true);
    GetWorld()->GetTimerManager().SetTimer(TimerEliminarBloque, this, &ABomberMan_12025GameMode::EliminarBloque, 4.0f, true);
    GetWorld()->GetTimerManager().SetTimer(TimerEliminarBloque, this, &ABomberMan_12025GameMode::EliminarBloque, 3.0f, true);

}

void ABomberMan_12025GameMode::PosicionarJugadorAleatoriamente()
{
    TArray<FVector> PosicionesValidas;
    float Espaciado = 400.0f;
    int32 NumFilas = MapaLaberinto.Num();
    int32 NumColumnas = MapaLaberinto[0].Num();
    float DistanciaMinima = FLT_MAX;

    for (int Y = 1; Y < NumFilas - 1; ++Y)
    {
        for (int X = 1; X < NumColumnas - 1; ++X)
        {
            // Buscamos celdas vacías adyacentes a bloques de madera
            if (MapaLaberinto[Y][X] == 0)
            {
                // Revisar las 4 direcciones alrededor
                bool CercaDeMadera =
                    MapaLaberinto[Y + 1][X] == 1 || MapaLaberinto[Y - 1][X] == 1 ||
                    MapaLaberinto[Y][X + 1] == 1 || MapaLaberinto[Y][X - 1] == 1;

                if (CercaDeMadera)
                {
                    // Calcular la distancia al borde más cercano
                    int DistIzq = X;
                    int DistDer = NumColumnas - 1 - X;
                    int DistArriba = Y;
                    int DistAbajo = NumFilas - 1 - Y;
                    int DistanciaABorde = FMath::Min3(DistIzq, DistDer, FMath::Min(DistArriba, DistAbajo));

                    FVector Pos = FVector(X * Espaciado, Y * Espaciado, 0.0f);

                    if (DistanciaABorde < DistanciaMinima)
                    {
                        PosicionesValidas.Empty(); // Limpiar para nueva distancia mínima
                        DistanciaMinima = DistanciaABorde;
                    }

                    if (DistanciaABorde == DistanciaMinima)
                    {
                        PosicionesValidas.Add(Pos);
                    }
                }
            }
        }
    }

    if (PosicionesValidas.Num() > 0)
    {
        FVector PosicionElegida = PosicionesValidas[FMath::RandRange(0, PosicionesValidas.Num() - 1)];

        // Ajustar altura
        PosicionElegida.Z = 100.f;
        APawn* Jugador = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
        if (Jugador)
        {
            ACharacter* JugadorChar = Cast<ACharacter>(Jugador);
            if (JugadorChar && JugadorChar->GetCapsuleComponent())
            {
                PosicionElegida.Z = JugadorChar->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
            }

            Jugador->SetActorLocation(PosicionElegida);
            UE_LOG(LogTemp, Warning, TEXT("Jugador posicionado correctamente en: %s"), *PosicionElegida.ToString());
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("No se encontró ninguna posición válida para el jugador."));
    }

}
