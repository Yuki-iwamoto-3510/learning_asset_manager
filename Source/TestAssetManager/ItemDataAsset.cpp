// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemDataAsset.h"


// プライマリアセットID名を取得する
FString UItemDataAsset::GetIdentifierString() const
{
    return GetPrimaryAssetId().ToString();
}

// プライマリアセットIDを取得する
FPrimaryAssetId UItemDataAsset::GetPrimaryAssetId() const
{
    return FPrimaryAssetId(ItemType, GetFName());
}

