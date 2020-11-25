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
	///�@�R���X�g���N�^
	/// </summary>
	UMyAssetManager() {}

	/// <summary>
	/// �������[�h�J�n��
	/// </summary>
	virtual void StartInitialLoading() override;

	/// <summary>
	/// �A�C�e���^�C�v��`
	/// </summary>
	static const FPrimaryAssetType WeaponItemType;
	static const FPrimaryAssetType ArmorItemType;

	// �A�Z�b�g�}�l�[�W���I�u�W�F�N�g�̎擾
	static UMyAssetManager& GetObj();
};
