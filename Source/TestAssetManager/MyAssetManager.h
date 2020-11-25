// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "MyAssetManager.generated.h"

/**
 * 
 */
UCLASS()
class TESTASSETMANAGER_API UMyAssetManager : public UAssetManager
{
	GENERATED_BODY()
	
public:
	/// <summary>
	///　コンストラクタ
	/// </summary>
	UMyAssetManager() {}

	/// <summary>
	/// 初期ロード開始時
	/// </summary>
	virtual void StartInitialLoading() override;

	/// <summary>
	/// アイテムタイプ定義
	/// </summary>
	static const FPrimaryAssetType WeaponItemType;
	static const FPrimaryAssetType ArmorItemType;

	// アセットマネージャオブジェクトの取得
	static UMyAssetManager& GetObj();
};
