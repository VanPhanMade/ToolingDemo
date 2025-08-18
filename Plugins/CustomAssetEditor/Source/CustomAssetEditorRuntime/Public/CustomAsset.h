#pragma once

#include "CoreMinimal.h"
#include "CustomAsset.generated.h"

UCLASS(BlueprintType)
class CUSTOMASSETEDITORRUNTIME_API UCustomAsset : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FString UnitName = TEXT("Unit Name");

	UPROPERTY(EditAnywhere)
	int32 UnitId = 0;

	UPROPERTY(EditAnywhere)
	bool bIsStoneCaster = false;
	
protected:

private:
	
};