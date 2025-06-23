// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "MementoConcreto.h"
#include "Cuidador.h"


// Sets default values
ABloque::ABloque()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Para la creacion de la malla 
	MeshBloque = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshBloque"));
	MeshBloque->SetupAttachment(RootComponent);
	RootComponent = MeshBloque;

	//Para las particulas
	Particulas = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particulas"));
	Particulas->SetupAttachment(RootComponent);

	// Establecer el tamaño inicial del bloque
	AjustarTamano(FVector(4.0f, 4.0f, 5.0f));

	Vidas = 20;
}

// Called when the game starts or when spawned
void ABloque::BeginPlay()
{
	Super::BeginPlay();

	GuardadoCuidador = GetWorld()->SpawnActor<ACuidador>(ACuidador::StaticClass());
	GuardadoCuidador->Guardar(this);

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Bloque con vida inicial: %d"), Vidas));
	}

	GetWorldTimerManager().SetTimer(TimerHandle_HacerDanio, this, &ABloque::HacerDanio, 3.f, false);
	GetWorldTimerManager().SetTimer(TimerHandle_Restaurar, this, &ABloque::RestaurarVida, 5.f, false);

}


// Called every frame
void ABloque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (MGrupal)
	{
		MovimientoGrupal(DeltaTime);
	}
	else
	{
		MovimientoUnico(DeltaTime);

	}

}

void ABloque::AjustarTamano(FVector NuevoTamano)
{
	if (MeshBloque)
	{
		MeshBloque->SetWorldScale3D(NuevoTamano);
	}
}
void ABloque::MovimientoUnico(float DeltaTime)
{
}
void ABloque::MovimientoGrupal(float DeltaTime)
{
	FVector Pos = GetActorLocation();

	// Movimiento vertical sincronizado
	float Time = GetWorld()->GetTimeSeconds();
	float AmplitudGlobal = 50.0f;
	float ZOffset = FMath::Sin(Time * 2.0f) * AmplitudGlobal;

	Pos.Z = PosicionInicial.Z + ZOffset;

	SetActorLocation(Pos);

}
void ABloque::SetTipoBloque(EBloqueTipo NuevoTipo)
{
	TipoBloque = NuevoTipo;
}
EBloqueTipo ABloque::GetTipoBloque()
{
	return TipoBloque;
}
int ABloque::GetID()
{
	return IDBloque;
}

void ABloque::HacerDanio()
{
	Vidas -= 5;

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Bloque dañado: vida actual = %d"), Vidas));
	}
}

void ABloque::RestaurarVida()
{
	if (GuardadoCuidador)
	{
		GuardadoCuidador->Cargar(this);

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Vida restaurada: %d"), Vidas));
		}
	}
}

void ABloque::GuardarEstado(IIMemento* SalidaMemento)
{
	AMementoConcreto* Memento = Cast<AMementoConcreto>(SalidaMemento);
	if (Memento)
	{
		Memento->Vidas = Vidas;
	}
}
void ABloque::EstablecerVidas(int _vidas)
{
	Vidas = _vidas;
}
int ABloque::ObtenerVidas()
{
	return Vidas;
}

/*
ABloque* ABloque::Clonar(UWorld* Mundo, const FVector& Posicion, const FRotator& Rotacion)
{
	return Mundo->SpawnActor<ABloque>(GetClass(), Posicion, Rotacion);;
}

*/