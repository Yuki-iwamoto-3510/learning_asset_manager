// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MyPrimaryDataAsset3.generated.h"

/**
 * 
 */
UCLASS()
class TESTASSETMANAGER_API UMyPrimaryDataAsset3 : public UPrimaryDataAsset
{
		GENERATED_BODY()
		UPROPERTY(EditAnywhere)
		USkeletalMesh* SkeletalMesh;
		/*USkeletalMeshComponent* uSkeletalMeshComponent;*/
};
