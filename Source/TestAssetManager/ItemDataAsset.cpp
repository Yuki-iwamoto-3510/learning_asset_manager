// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemDataAsset.h"


// �v���C�}���A�Z�b�gID�����擾����
FString UItemDataAsset::GetIdentifierString() const
{
    return GetPrimaryAssetId().ToString();
}

// �v���C�}���A�Z�b�gID���擾����
FPrimaryAssetId UItemDataAsset::GetPrimaryAssetId() const
{
    return FPrimaryAssetId(ItemType, GetFName());
}

