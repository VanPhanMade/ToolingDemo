#include "CustomAssetAction.h"
#include "CustomAsset.h"

CustomAssetAction::CustomAssetAction(EAssetTypeCategories::Type category)
{
	_assetCategory = category;
}

FText CustomAssetAction::GetName() const
{
	return FText::FromString(TEXT("My Custom Asset"));
}

FColor CustomAssetAction::GetTypeColor() const
{
	return FColor::Cyan;
}

UClass* CustomAssetAction::GetSupportedClass() const
{
	return UCustomAsset::StaticClass();
}

void CustomAssetAction::OpenAssetEditor(const TArray<UObject*>& inObjects, TSharedPtr<class IToolkitHost> editWithinLevelEditor)
{
	
}

uint32 CustomAssetAction::GetCategories()
{
	return _assetCategory;
}
