// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemDataAsset.generated.h"

UCLASS(Abstract, BlueprintType)
class TESTASSETMANAGER_API UItemDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	// �v���C�}���A�Z�b�gID�����擾����
	UFUNCTION(BlueprintCallable, Category = "UItemDataAsset")
		FString GetIdentifierString() const;

	// �v���C�}���A�Z�b�gID���擾����i�v�I�[�o�[���C�h�j
	virtual FPrimaryAssetId GetPrimaryAssetId() const override;

	/// <summary>
	/// �A�C�e����
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UItemDataAsset")
	FText ItemName;

	/// <summary>
	/// �A�C�e���^�C�v
	/// </summary>
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UItemDataAsset")
	FPrimaryAssetType ItemType;

};
