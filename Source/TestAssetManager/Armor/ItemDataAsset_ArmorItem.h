// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../ItemDataAsset.h"
#include "../MyAssetManager.h"
#include "ItemDataAsset_ArmorItem.generated.h"

/// <summary>
/// �h��A�C�e��
/// </summary>
UCLASS()
class TESTASSETMANAGER_API UItemDataAsset_ArmorItem : public UItemDataAsset
{
	GENERATED_BODY()

public:
	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	UItemDataAsset_ArmorItem()
	{
		ItemType = UMyAssetManager::ArmorItemType;
	}

	// �A�N�^�[
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ArmorItem")
		TSubclassOf<AActor> Actor;
};