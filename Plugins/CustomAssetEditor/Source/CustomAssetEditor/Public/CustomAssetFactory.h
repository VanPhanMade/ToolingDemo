#pragma once

#include "CoreMinimal.h"
#include "CustomAssetFactory.generated.h"

UCLASS()
class UCustomAssetFactory : public UFactory
{
	GENERATED_BODY()

public:
	UCustomAssetFactory(const FObjectInitializer& ObjectInitializer);

	virtual UObject* FactoryCreateNew(UClass* UClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* InContext, FFeedbackContext* Warn) override;
	virtual bool CanCreateNew() const override;
protected:

private:
};