// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class TESTASSETMANAGER_API UItemDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	/// <summary>
	/// �A�C�e����
	/// </summary>
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Item)
		FText ItemName;

	/// <summary>
	/// �A�C�e���^�C�v
	/// </summary>
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Item)
		FPrimaryAssetType ItemType;

	virtual FPrimaryAssetId GetPrimaryAssetId() const override;

};
