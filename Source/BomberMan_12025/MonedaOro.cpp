// Fill out your copyright notice in the Description page of Project Settings.


#include "MonedaOro.h"
#include "Components/SceneComponent.h"

AMonedaOro::AMonedaOro()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMeshMoneda(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	if (ObjetoMeshMoneda.Succeeded())
	{
		MeshMoneda->SetStaticMesh(ObjetoMeshMoneda.Object);
		MeshMoneda->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		MeshMoneda->SetWorldScale3D(FVector(1.0f, 0.5f, 1.0f));
	}

	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMonedaMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold'"));
	if (ObjetoMonedaMaterial.Succeeded())
	{
		MeshMoneda->SetMaterial(0, ObjetoMonedaMaterial.Object);
	}

}

void AMonedaOro::BeginPlay()
{
	Super::BeginPlay();
}

void AMonedaOro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}



