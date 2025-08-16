#include "CustomAssetFactory.h"
#include "CustomAsset.h"

UCustomAssetFactory::UCustomAssetFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	SupportedClass = UCustomAsset::StaticClass();
}

UObject* UCustomAssetFactory::FactoryCreateNew(UClass* UClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* InContext, FFeedbackContext* Warn)
{
	UCustomAsset* asset = NewObject<UCustomAsset>(InParent, InName, Flags, InContext);
	return asset;
}

bool UCustomAssetFactory::CanCreateNew() const
{
	return true;
}


