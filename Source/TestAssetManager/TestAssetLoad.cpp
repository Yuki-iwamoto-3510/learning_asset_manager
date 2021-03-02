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

	// 自作アセットマネージャークラス取得
	UMyAssetManager& assetManager = UMyAssetManager::GetObj();

	TArray<FAssetData> weaponList;
	TArray<FAssetData> armorList;

	// 武器アセットのリストを取得
	assetManager.GetPrimaryAssetDataList(assetManager.WeaponItemType, weaponList);

	// 防具アセットのリストを取得
	assetManager.GetPrimaryAssetDataList(assetManager.ArmorItemType, armorList);

	// ワールド取得
	UWorld* world = GetWorld();

	// 武器
	FVector weaponLocationOffset = FVector(0, 200, 570);
	for (int i = 0;i < weaponList.Num();i++)
	{
		UItemDataAsset_WeaponItem* weaponDataAsset = Cast<UItemDataAsset_WeaponItem>(weaponList[i].GetAsset());
		if (weaponDataAsset)
		{
			// ワールドにアクターを生成
			AItemActor* actor = world->SpawnActor<AItemActor>();

			// アクターにアセットマネージャーから取得したロード済みのスタティックメッシュをセット
			actor->SetStaticMesh(weaponDataAsset->ItemModel);

			// ワールドでのトランスフォーム設定
			FVector actorLocation = FVector(weaponLocationOffset.X, weaponLocationOffset.Y * i, weaponLocationOffset.Z);
			actor->SetActorLocation(actorLocation);
			actor->SetActorRotation(FRotator(0, 90, 90));
		}
	}

	// 防具
	FVector armorLocationOffset = FVector(0, 200, 460);
	for (int i = 0;i < armorList.Num();i++)
	{
		UItemDataAsset_ArmorItem* armorDataAsset = Cast<UItemDataAsset_ArmorItem>(armorList[i].GetAsset());
		if (armorDataAsset)
		{
			// ワールドにアクターを生成
			AItemActor* actor = world->SpawnActor<AItemActor>();

			// アクターにアセットマネージャーから取得したロード済みのスタティックメッシュをセット
			actor->SetStaticMesh(armorDataAsset->ItemModel);

			// ワールドでのトランスフォーム設定
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