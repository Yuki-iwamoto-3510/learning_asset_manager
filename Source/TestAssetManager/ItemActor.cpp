// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemActor.h"
#include <Runtime\Engine\Classes\Kismet\KismetMathLibrary.h>

AItemActor::AItemActor(const FObjectInitializer& ObjectInitializer) : AActor(ObjectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	staticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MESH"));
}

void AItemActor::BeginPlay()
{
	Super::BeginPlay();
}

void AItemActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AItemActor::SetStaticMesh(UStaticMesh* mesh) 
{
	staticMeshComponent->SetStaticMesh(mesh);
}

