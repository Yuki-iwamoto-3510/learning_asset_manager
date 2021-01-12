// Fill out your copyright notice in the Description page of Project Settings.


#include "TestAssetLoad.h"
#include "MyAssetManager.h"

TArray<FAssetData> weaponList;
TArray<FAssetData> armorList;

// Sets default values
ATestAssetLoad::ATestAssetLoad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ATestAssetLoad::BeginPlay()
{
	Super::BeginPlay();	
}

void ATestAssetLoad::DrawItem()
{
	UE_LOG(LogTemp, Display, TEXT("Start Draw Load Item"))

	// ����A�Z�b�g�}�l�[�W���[�N���X�擾
	UMyAssetManager& assetManager = UMyAssetManager::GetObj();

	// ����A�Z�b�g�̃��X�g���擾
	assetManager.GetPrimaryAssetDataList(assetManager.WeaponItemType, weaponList);

	// �h��A�Z�b�g�̃��X�g���擾
	assetManager.GetPrimaryAssetDataList(assetManager.ArmorItemType, armorList);

	//TArray<UObject*> createWeapons;
	for(FAssetData asset : weaponList)
	{
		//FString name = asset.AssetName.ToString();
		//UE_LOG(LogTemp, Display, TEXT("�A�Z�b�g���F%s\n"), (const char*)TCHAR_TO_ANSI(*name));
		//createWeapons.Add(NewObject<UObject>(asset.GetAsset()));
	}
}

// Called every frame
void ATestAssetLoad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
