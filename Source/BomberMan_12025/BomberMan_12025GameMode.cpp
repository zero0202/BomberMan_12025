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
#include "Enemigo.h"
#include "EnemigoMedusa.h"
#include "EnemigoSaltarin.h"
#include "EnemigoTortuga.h"
#include "EnemigoGolen.h"
#include "IPrototypeBloque.h"
#include "FabricaBloque.h"
#include "FabricaBloqueRedondos.h"
#include "FabricaBloqueCuadrados.h"
#include "IComponente.h"
#include "DecoradorVelocidad.h"
#include "IMplementacion.h"
#include "MovimientoCircular.h"
#include "MonedaOro.h"
#include "MonedaPlatino.h"
#include "Cuidador.h"
#include "IMemento.h"


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
 
    FabricaBloquesMap();
    GenerarMapaDesdeCodigo();
    GenerarLaberinto();
    Prototipos();
    ClonarBloques(TFilas, TColumnas);
	SpawnEnemigos();
    DecorarEnemigos();
    Monedas();
   

    //para posicionar aleatoriamente al jugador luego de generar el laberinto
    //GetWorld()->GetTimerManager().SetTimer(TimerPosicion, this, &ABomberMan_12025GameMode::PosicionarJugadorAleatoriamente, 0.1f, false);
    // Cada 5 seg aplica DecoradorVelocidad a un enemigo
    GetWorld()->GetTimerManager().SetTimer(TimerD, this, &ABomberMan_12025GameMode::DecorarEnemigos, 3.0f, true);
}
void ABomberMan_12025GameMode::GenerarMapaDesdeCodigo()
{
    int Columnas = 23;
    int Filas = 23;

    TColumnas = Columnas + 1;
    TFilas = Filas + 1;
    int Y,X;
    //inicializamos la matriz
    MapaLaberinto.SetNum(TFilas);
    for (Y = 0; Y < TFilas; Y++)
    {
        MapaLaberinto[Y].SetNum(TColumnas);
        for (X = 0; X < TColumnas; X++)
        {
            int Mitad = TColumnas / 2;
            //solo la mitad
            if (X >= Mitad)
            {
                // Bordes verticales y horizontales
                if (X == 0||X == TColumnas - 1 || Y == 0 || Y == TFilas - 1)
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
                MapaLaberinto[Y][X] = -2; // No se usa izquierda
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
                MapaLaberinto[Y][X] = FMath::RandRange(2, 4); 
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
            // Traducir entero a EBloqueTipo (ajusta según tu enumeración real)
            EBloqueTipo TipoBloque;
            switch (Tipo)
            {
            case 1: TipoBloque = EBloqueTipo::Acero; break;
            case 2: TipoBloque = EBloqueTipo::Ladrillo; break;
            case 3: TipoBloque = EBloqueTipo::Concreto; break;
            case 4: TipoBloque = EBloqueTipo::Madera; break;
            case 5: TipoBloque = EBloqueTipo::Lava; break;
            case 6: TipoBloque = EBloqueTipo::Arena; break;
            case 7: TipoBloque = EBloqueTipo::Electrico; break;
            case 8: TipoBloque = EBloqueTipo::Pegajoso; break;
            case 9: TipoBloque = EBloqueTipo::Hielo; break;
            case 10: TipoBloque = EBloqueTipo::Hongo; break;
            default: continue;
            }

            FVector Posicion = FVector(X * Espaciado, Y * Espaciado, 0.0f);
            FRotator Rotacion = FRotator::ZeroRotator;
            UWorld* World = GetWorld();
            if (FabricaRedondo)
            {
                BloqueRedondo = FabricaRedondo->CargarBloque(World, Posicion, Rotacion, TipoBloque, ID);

                if (BloqueRedondo)
                {
                    BloquesA.Add(BloqueRedondo);
                    MapaBloques.Add(ID, BloqueRedondo);
                    ID++;
                }
            }
            // Bloque de FabricaCuadrado (ligeramente desplazado en Z para no solaparse)
            if (FabricaCuadrado)
            {
                FVector PosicionCuadrado = FVector(X * Espaciado, Y * Espaciado, 0.0f);
                ABloque* NuevoBloqueCuadrado = FabricaCuadrado->CargarBloque(World, PosicionCuadrado, Rotacion, TipoBloque, ID);
                if (NuevoBloqueCuadrado)
                {
                    BloquesA.Add(NuevoBloqueCuadrado);
                    MapaBloques.Add(ID, NuevoBloqueCuadrado);
                    ID++;
                }
            }
        }
                    
        
    }

}

void ABomberMan_12025GameMode::MoverTodos(EBloqueTipo Tipo)
{
    for (ABloque* Bloque : TodosLosBloques)
    {
        
        if (Bloque && Bloque->TipoBloque == Tipo)
        {
            Bloque->MGrupal = true;
        }
    }
}

// Inicializa el mapa de prototipos con instancias reales de bloques en el mundo
void ABomberMan_12025GameMode::Prototipos()
{
    // Lambda local para evitar repetir código al registrar cada tipo
    auto AgregarPrototipo = [&](int TipoID, TSubclassOf<AActor> ClaseBloque)
        {
            TArray<AActor*> Encontrados;
            // Busca un actor ya existente de la clase especificada
            UGameplayStatics::GetAllActorsOfClass(GetWorld(), ClaseBloque, Encontrados);

            if (Encontrados.Num() > 0)
            {
                // Guarda la referencia del primero encontrado como prototipo
                MapaPrototipos.Add(TipoID, Encontrados[0]);
            }
        };

        // Registro de todos los tipos de bloque para su reflejo
        AgregarPrototipo(1, ABloqueAcero::StaticClass());
        AgregarPrototipo(2, ABloqueLadrillo::StaticClass());
        AgregarPrototipo(3, ABloqueConcreto::StaticClass());
        AgregarPrototipo(4, ABloqueMadera::StaticClass());
        AgregarPrototipo(5, ABloqueLava::StaticClass());
        AgregarPrototipo(6, ABloqueHielo::StaticClass());
        AgregarPrototipo(7, ABloqueElectrico::StaticClass());
        AgregarPrototipo(8, ABloqueHongo::StaticClass());
        AgregarPrototipo(9, ABloqueArena::StaticClass());
        AgregarPrototipo(10, ABloquePegajoso::StaticClass());
        

}

void ABomberMan_12025GameMode::ClonarBloques(int32 InTFilas, int32 InTColumnas)
{
    
    float TamCelda = 400.f; // Tamaño entre bloques en el mapa
    int32 ColumnaCentro = TColumnas / 2; // Punto de reflejo horizontal

    for (int32 Y = 0; Y < InTFilas; Y++)
    {
        for (int32 X = ColumnaCentro; X < InTColumnas; X++)
        {
            int32 Tipo = MapaLaberinto[Y][X];
            if (Tipo <= 0) continue; // Ignorar celdas vacías o sin tipo

            // Calcula la posición del clon reflejado en la otra mitad del mapa
            int32 XReflejado = ColumnaCentro - (X - ColumnaCentro);
            FVector PosicionClonada(XReflejado * TamCelda, Y * TamCelda, 0.0f);

            // Busca el prototipo correspondiente al tipo en el mapa
            if (AActor* Prototipo = MapaPrototipos.FindRef(Tipo))
            {
                // Se asegura que el prototipo implemente la interfaz de clonación
                if (IIPrototypeBloque* Clonador = Cast<IIPrototypeBloque>(Prototipo))
                {
                    // Se genera el clon usando el método virtual Clonar
                    AActor* Clon = Clonador->Clonar(GetWorld(), PosicionClonada);

                    if (Clon)
                    {

                        
                        // Se actualiza el mapa para registrar el nuevo bloque clonado
                        MapaLaberinto[Y][XReflejado] = Tipo;
                        
                        // (Opcional) Muestra mensaje en consola para verificar clonación
                        UE_LOG(LogTemp, Warning, TEXT("Clonado tipo %d en (%d, %d)"), Tipo, XReflejado, Y);

                    }
                }
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

void ABomberMan_12025GameMode::FabricaBloquesMap()
{
    if (!FabricaRedondo)
    {
        FabricaRedondo = GetWorld()->SpawnActor<AFabricaBloqueRedondos>(AFabricaBloqueRedondos::StaticClass());

    }
    if (!FabricaCuadrado)
    {
        FabricaCuadrado = GetWorld()->SpawnActor<AFabricaBloqueCuadrados>(AFabricaBloqueCuadrados::StaticClass());

    }

}

void ABomberMan_12025GameMode::SpawnEnemigos()
{
    if (PuntosPatrullaLibres.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("No hay puntos de patrulla libres para spawn de enemigos."));
        return;
    }

    // Limpiar enemigos existentes
    for (AEnemigo* Enemigo : EnemigosA)
    {
        if (Enemigo)
        {
            Enemigo->Destroy();
        }
    }
    EnemigosA.Empty();

    int32 TotalEnemigos = 4; // Spawneamos 4 enemigos distintos

    for (int32 i = 0; i < TotalEnemigos; ++i)
    {
        int32 Index = FMath::RandRange(0, PuntosPatrullaLibres.Num() - 1);
        FVector SpawnLocation = PuntosPatrullaLibres[Index];

        AEnemigo* NuevoEnemigo = nullptr;

        switch (i)
        {
        case 0:
            NuevoEnemigo = GetWorld()->SpawnActor<AEnemigoMedusa>(AEnemigoMedusa::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
            break;
        case 1:
            NuevoEnemigo = GetWorld()->SpawnActor<AEnemigoSaltarin>(AEnemigoSaltarin::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
            break;
        case 2:
            NuevoEnemigo = GetWorld()->SpawnActor<AEnemigoTortuga>(AEnemigoTortuga::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
            break;
        case 3:
            NuevoEnemigo = GetWorld()->SpawnActor<AEnemigoGolen>(AEnemigoGolen::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
            break;
        default:
            break;
        }

        if (NuevoEnemigo)
        {
            EnemigosA.Add(NuevoEnemigo);
            UE_LOG(LogTemp, Warning, TEXT("Enemigo %d spawn en: %s"), i, *SpawnLocation.ToString());
        }
    }
}

void ABomberMan_12025GameMode::DecorarEnemigos()
{
    if (EnemigosA.Num() == 0) return;

    // Elegir enemigo aleatorio
    int32 Index = FMath::RandRange(0, EnemigosA.Num() - 1);
    AEnemigo* Enemigo = EnemigosA[Index];
    if (!Enemigo) return;

    float VelActual = Enemigo->GetVelocidadActual();
    // Spawnear un DecoradorVelocidad
    ADecoradorVelocidad* Decorador = GetWorld()->SpawnActor<ADecoradorVelocidad>(ADecoradorVelocidad::StaticClass());
    if (Decorador)
    {
        // Enviar velocidad actual
        Decorador->InicializarVelocidad(Enemigo, VelActual, 10.0f); // Por ejemplo, 3 seg
    }
    /*
	ADecoradorEnemigo* EnemigoConcreto = GetWorld()->SpawnActor<ADecoradorEnemigo>(ADecoradorEnemigo::StaticClass());
	ADecoradorVelocidad* EnemigoVel = GetWorld()->SpawnActor<ADecoradorVelocidad>(ADecoradorVelocidad::StaticClass());
    
    
    if (EnemigosA.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("No hay enemigos para decorar."));
        return;
    }

    // Seleccionar un enemigo aleatorio
    int32 Index = FMath::RandRange(0, EnemigosA.Num() - 1);
    AEnemigo* EnemigoSeleccionado = EnemigosA[Index];

    if (!EnemigoSeleccionado) return;

    UE_LOG(LogTemp, Warning, TEXT("Decorando enemigo %s con Velocidad!"), *EnemigoSeleccionado->GetName());

    // Crear Decorador
    ADecoradorVelocidad* Decorador = GetWorld()->SpawnActor<ADecoradorVelocidad>(ADecoradorVelocidad::StaticClass());
    if (Decorador)
    {
        // Aplica velocidad actual * 1.5, durante 5 segundos
        float VelocidadActual = EnemigoSeleccionado->GetVelocidadActual();

        Decorador->InicializarVelocidad(EnemigoSeleccionado, VelocidadActual * 1.5f, 5.0f);
    }
    */
}
/*
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
*/
//bridge
void ABomberMan_12025GameMode::Monedas()
{
   
    Oro = GetWorld()->SpawnActor<AMonedaOro>(AMonedaOro::StaticClass(), FVector(2800, 420, 40), FRotator::ZeroRotator);
	Platino = GetWorld()->SpawnActor<AMonedaPlatino>(AMonedaPlatino::StaticClass(), FVector(2000, 3630, 40), FRotator::ZeroRotator);
	//Moneda = GetWorld()->SpawnActor<AMoneda>(AMoneda::StaticClass());

    AMovimientoCircular* NuevoMovimiento1 = GetWorld()->SpawnActor<AMovimientoCircular>(AMovimientoCircular::StaticClass());
    Oro->SetMovimiento(NuevoMovimiento1);
    //Oro->MostrarDestruccion();

}
/*
void ABomberMan_12025GameMode::RestaurarBloque()
{
    if (!BloqueControlado)
    {
        BloqueControlado = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass());
    }

    if (!Cuidador)
    {
        Cuidador = GetWorld()->SpawnActor<ACuidador>(ACuidador::StaticClass());
    }

    int Vidas = BloqueControlado->ObtenerVidas();
    GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, FString::Printf(TEXT("RestaurarBloque - Vidas: %d"), Vidas));

}

void ABomberMan_12025GameMode::GuardarJuego()
{
    if (BloqueControlado && Cuidador)
    {
        BloqueControlado->EstablecerVidas(7);
        Cuidador->Guardar(BloqueControlado);

        GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Purple, TEXT("Juego Guardado"));

        int Vidas = BloqueControlado->ObtenerVidas();
        GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, FString::Printf(TEXT("Vidas después de guardar: %d"), Vidas));
    }
}

void ABomberMan_12025GameMode::CargarJuego()
{
    if (BloqueControlado && Cuidador)
    {
        Cuidador->Cargar(BloqueControlado);

        GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Orange, TEXT("Juego Cargado"));

        int Vidas = BloqueControlado->ObtenerVidas();
        GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Blue, FString::Printf(TEXT("Vidas después de cargar: %d"), Vidas));
    }
}
*/