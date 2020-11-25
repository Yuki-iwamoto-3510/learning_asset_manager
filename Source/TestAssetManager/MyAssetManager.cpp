// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAssetManager.h"
#include "./ItemDataAsset.h"

const FPrimaryAssetType UMyAssetManager::WeaponItemType = TEXT("WeaponItem");
const FPrimaryAssetType UMyAssetManager::ArmorItemType = TEXT("ArmorItem");

/// <summary>
/// �A�Z�b�g�}�l�[�W���[�I�u�W�F�N�g�̎擾
/// </summary>
/// <returns></returns>
UMyAssetManager& UMyAssetManager::GetObj()
{
	UMyAssetManager* This = Cast<UMyAssetManager>(GEngine->AssetManager);

	if (This) 
	{
		return(*This);
	}
	else
	{
		UE_LOG(LogTemp, Fatal, TEXT("DefaultEngine.ini �ł�AssetManager�̐ݒ肪�s���ł�"));
		return(*NewObject<UMyAssetManager>());
	}
}

void UMyAssetManager::StartInitialLoading() 
{
	Super::StartInitialLoading();
}
