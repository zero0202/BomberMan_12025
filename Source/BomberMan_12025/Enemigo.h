// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IComponente.h"
#include "Enemigo.generated.h"

class UStaticMeshComponent;
class UParticleSystemComponent;
class ABomberMan_12025GameMode;

UCLASS()
class BOMBERMAN_12025_API AEnemigo : public AActor, public IIComponente
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:

	bool bDestruible = true;
	float Altura;
	float Danio;
	float VelocidadMovimineto;
	int Vida;

protected:

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshEnemigo;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* ParticleSystem;
	ABomberMan_12025GameMode* GameModeReference; // Referencia al modo de juego
	float Espaciado = 400.0f;
	bool EsEspacioLibre(FVector Pos);

public:

	virtual void AjustarTamano(FVector NuevoTamano);
	virtual void RecibirDanio(float Danio);
	virtual void Morir();
	virtual void MoverEnemigo(float DeltaTime);
	

	//decorator
	void ModificarVelocidad(float Vel) override;
	float GetVelocidadActual();
};
