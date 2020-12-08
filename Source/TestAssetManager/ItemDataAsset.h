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
	// プライマリアセットID名を取得する
	UFUNCTION(BlueprintCallable, Category = "UItemDataAsset")
		FString GetIdentifierString() const;

	// プライマリアセットIDを取得する（要オーバーライド）
	virtual FPrimaryAssetId GetPrimaryAssetId() const override;

	/// <summary>
	/// アイテム名
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UItemDataAsset")
	FText ItemName;

	/// <summary>
	/// アイテムタイプ
	/// </summary>
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "UItemDataAsset")
	FPrimaryAssetType ItemType;

};
