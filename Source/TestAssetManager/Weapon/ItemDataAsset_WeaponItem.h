// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../ItemDataAsset.h"
#include "../MyAssetManager.h"
#include "ItemDataAsset_WeaponItem.generated.h"

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	Sword,
	Axe,
};

/// <summary>
/// 武器アイテム
/// </summary>
UCLASS()
class TESTASSETMANAGER_API UItemDataAsset_WeaponItem : public UItemDataAsset
{
	GENERATED_BODY()

public:

	// コンストラクタ
	UItemDataAsset_WeaponItem() 
	{
		ItemType = UMyAssetManager::WeaponItemType;
	}

	// 武器タイプ
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "WeaponItem")
	EWeaponType weaponType;
};
