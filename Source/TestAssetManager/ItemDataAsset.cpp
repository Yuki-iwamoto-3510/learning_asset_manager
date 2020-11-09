// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemDataAsset.h"

FPrimaryAssetId UItemDataAsset::GetPrimaryAssetId() const
{
	return FPrimaryAssetId(ItemType, GetFName());
}

