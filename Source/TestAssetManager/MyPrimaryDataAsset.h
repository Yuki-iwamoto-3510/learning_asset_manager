// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MyPrimaryDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class TESTASSETMANAGER_API UMyPrimaryDataAsset : public UPrimaryDataAsset
{
    GENERATED_BODY()

        UPROPERTY(EditAnywhere)
        UStaticMeshComponent* uStaticMeshComponent;
};
