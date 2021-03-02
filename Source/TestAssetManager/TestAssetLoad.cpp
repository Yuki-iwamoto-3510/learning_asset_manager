// Fill out your copyright notice in the Description page of Project Settings.


#include "TestAssetLoad.h"
#include "MyAssetManager.h"
#include <TestAssetManager\ItemDataAsset.h>
#include <TestAssetManager\Weapon\ItemDataAsset_WeaponItem.h>
#include <TestAssetManager\Armor\ItemDataAsset_ArmorItem.h>
#include <TestAssetManager\ItemActor.h>

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

	TArray<FAssetData> weaponList;
	TArray<FAssetData> armorList;

	// ����A�Z�b�g�̃��X�g���擾
	assetManager.GetPrimaryAssetDataList(assetManager.WeaponItemType, weaponList);

	// �h��A�Z�b�g�̃��X�g���擾
	assetManager.GetPrimaryAssetDataList(assetManager.ArmorItemType, armorList);

	// ���[���h�擾
	UWorld* world = GetWorld();

	// ����
	FVector weaponLocationOffset = FVector(0, 200, 570);
	for (int i = 0;i < weaponList.Num();i++)
	{
		UItemDataAsset_WeaponItem* weaponDataAsset = Cast<UItemDataAsset_WeaponItem>(weaponList[i].GetAsset());
		if (weaponDataAsset)
		{
			// ���[���h�ɃA�N�^�[�𐶐�
			AItemActor* actor = world->SpawnActor<AItemActor>();

			// �A�N�^�[�ɃA�Z�b�g�}�l�[�W���[����擾�������[�h�ς݂̃X�^�e�B�b�N���b�V�����Z�b�g
			actor->SetStaticMesh(weaponDataAsset->ItemModel);

			// ���[���h�ł̃g�����X�t�H�[���ݒ�
			FVector actorLocation = FVector(weaponLocationOffset.X, weaponLocationOffset.Y * i, weaponLocationOffset.Z);
			actor->SetActorLocation(actorLocation);
			actor->SetActorRotation(FRotator(0, 90, 90));
		}
	}

	// �h��
	FVector armorLocationOffset = FVector(0, 200, 460);
	for (int i = 0;i < armorList.Num();i++)
	{
		UItemDataAsset_ArmorItem* armorDataAsset = Cast<UItemDataAsset_ArmorItem>(armorList[i].GetAsset());
		if (armorDataAsset)
		{
			// ���[���h�ɃA�N�^�[�𐶐�
			AItemActor* actor = world->SpawnActor<AItemActor>();

			// �A�N�^�[�ɃA�Z�b�g�}�l�[�W���[����擾�������[�h�ς݂̃X�^�e�B�b�N���b�V�����Z�b�g
			actor->SetStaticMesh(armorDataAsset->ItemModel);

			// ���[���h�ł̃g�����X�t�H�[���ݒ�
			FVector actorLocation = FVector(armorLocationOffset.X, armorLocationOffset.Y * i, armorLocationOffset.Z);
			actor->SetActorLocation(actorLocation);
			actor->SetActorRotation(FRotator(0, 90, 90));
		}
	}
}

// Called every frame
void ATestAssetLoad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}