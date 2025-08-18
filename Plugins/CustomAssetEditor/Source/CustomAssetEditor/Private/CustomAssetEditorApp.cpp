#include "CustomAssetEditorApp.h"
#include "CustomAssetAppMode.h"
#include "CustomAsset.h"

void CustomAssetEditorApp::RegisterTabs(const TSharedRef<class FTabManager>& CustomTabManager)
{
	FWorkflowCentricApplication::RegisterTabSpawners(CustomTabManager);
}

void CustomAssetEditorApp::InitEditor(const EToolkitMode::Type mode, const TSharedPtr<class IToolkitHost>& toolkitHost, UObject* inObject)
{
	TArray<UObject*> objectsToEdit;
	objectsToEdit.Add(inObject);

	_workingAsset = Cast<UCustomAsset>(inObject);

	InitAssetEditor(
		mode,
		toolkitHost,
		TEXT("CustomAssetEditorApp"),
		FTabManager::FLayout::NullLayout,
		true,
		true,
		objectsToEdit
	);

	AddApplicationMode(TEXT("CustomAssetAppMode"), MakeShareable(new CustomAssetAppMode(SharedThis(this))));
	SetCurrentMode(TEXT("CustomAssetAppMode"));
	
}
