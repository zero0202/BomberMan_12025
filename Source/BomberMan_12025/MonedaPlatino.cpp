// Fill out your copyright notice in the Description page of Project Settings.


#include "MonedaPlatino.h"


AMonedaPlatino::AMonedaPlatino()
{
    PrimaryActorTick.bCanEverTick = true;

    static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMeshMoneda(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
    if (ObjetoMeshMoneda.Succeeded())
    {
        MeshMoneda->SetStaticMesh(ObjetoMeshMoneda.Object);
        MeshMoneda->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
        MeshMoneda->SetWorldScale3D(FVector(1.0f, 0.5f, 1.0f));
    }

    static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoMonedaMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Rock_Marble_Polished.M_Rock_Marble_Polished'"));
    if (ObjetoMonedaMaterial.Succeeded())
    {
        MeshMoneda->SetMaterial(0, ObjetoMonedaMaterial.Object);
    }

}

void AMonedaPlatino::BeginPlay()
{
	Super::BeginPlay();

}

void AMonedaPlatino::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

