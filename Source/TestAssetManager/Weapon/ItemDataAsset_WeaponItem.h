// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../ItemDataAsset.h"
#include "../MyAssetManager.h"
#include "ItemDataAsset_WeaponItem.generated.h"

/// <summary>
/// 武器アイテム
/// </summary>
UCLASS()
class TESTASSETMANAGER_API UItemDataAsset_WeaponItem : public UItemDataAsset
{
	GENERATED_BODY()

public:

	/// <summary>
	/// コンストラクタ
	/// </summary>
	UItemDataAsset_WeaponItem()
	{
		ItemType = UMyAssetManager::WeaponItemType;
	}

	// アクター
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "WeaponItem")
		TSubclassOf<AActor> Actor;
};
