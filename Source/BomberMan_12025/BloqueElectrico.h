// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "IPrototypeBloque.h"
#include "BloqueElectrico.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_12025_API ABloqueElectrico : public ABloque, public IIPrototypeBloque
{
	GENERATED_BODY()
public:
	ABloqueElectrico();
protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
public:

	UParticleSystemComponent* ParticulasElectricas;

	bool bAbriendoM;
	float VelocidadMovimiento;
	float DistanciaApertura; // Distancia m�xima al abrir
	FVector PosicionInicial; // Posici�n inicial

	// Implementaci�n del patr�n Prototype
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion)  override;

};
