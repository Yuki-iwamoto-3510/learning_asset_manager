// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../ItemDataAsset.h"
#include "../MyAssetManager.h"
#include "ItemDataAsset_ArmorItem.generated.h"

UENUM(BlueprintType)
enum class EArmorPartsType : uint8
{
	Helmet,
	Body,
	Arm,
	Leg,
};

UCLASS()
class TESTASSETMANAGER_API UItemDataAsset_ArmorItem : public UItemDataAsset
{
	GENERATED_BODY()

public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	UItemDataAsset_ArmorItem()
	{
		ItemType = UMyAssetManager::ArmorItemType;
	}

	// アセットモデル
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ArmorItem")
	UStaticMesh* armorModel;

	// 防具部位タイプ
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ArmorItem")
	EArmorPartsType armorPartsType;
};
