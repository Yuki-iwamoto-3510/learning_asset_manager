// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../ItemDataAsset.h"
#include "../MyAssetManager.h"
#include "ItemDataAsset_WeaponItem.generated.h"

/// <summary>
/// ����A�C�e��
/// </summary>
UCLASS()
class TESTASSETMANAGER_API UItemDataAsset_WeaponItem : public UItemDataAsset
{
	GENERATED_BODY()

public:

	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	UItemDataAsset_WeaponItem()
	{
		ItemType = UMyAssetManager::WeaponItemType;
	}

	// �A�N�^�[
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "WeaponItem")
		TSubclassOf<AActor> Actor;
};
