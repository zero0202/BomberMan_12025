// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bloque.generated.h"

// Enumeracion definida 
UENUM(BlueprintType)
enum class EBloqueTipo : uint8
{
	Madera     UMETA(DisplayName = "Madera"),
	Concreto   UMETA(DisplayName = "Concreto"),
	Ladrillo   UMETA(DisplayName = "Ladrillo"),
	Acero      UMETA(DisplayName = "Acero"),
	Lava       UMETA(DisplayName = "Lava"),
	Hielo      UMETA(DisplayName = "Hielo"),
	Electrico  UMETA(DisplayName = "Electrico"),
	Arena      UMETA(DisplayName = "Arena"),
	Hongo      UMETA(DisplayName = "Hongo"),
	Pegajoso   UMETA(DisplayName = "Pegajoso")
};
UCLASS()
class BOMBERMAN_12025_API ABloque : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloque();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:

	
	//malla del bloque
	UPROPERTY()
	UStaticMeshComponent* MeshBloque;
	UPROPERTY()
	UParticleSystemComponent* Particulas;

	FVector PosicionInicial;
public:

	//Tipo de bloque
	EBloqueTipo TipoBloque;
	bool bDestruible = true;
	bool MGrupal = false; 
	int IDBloque;
	static int ContadorIDs;
	virtual void AjustarTamano(FVector NuevoTamano);
	virtual void MovimientoUnico(float DeltaTime);
	virtual void MovimientoGrupal(float DeltaTime);


	FORCEINLINE void SetTipoBloque(EBloqueTipo NuevoTipo);
	FORCEINLINE EBloqueTipo GetTipoBloque();
	FORCEINLINE int GetID();

public:
	//virtual ABloque* Clonar(UWorld* Mundo, const FVector& Posicion, const FRotator& Rotacion) override;


};
