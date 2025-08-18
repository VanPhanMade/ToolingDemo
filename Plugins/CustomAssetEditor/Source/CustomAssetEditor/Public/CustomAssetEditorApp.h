#pragma once

#include "CoreMinimal.h"
#include "WorkflowOrientedApp/WorkflowCentricApplication.h"

class CustomAssetEditorApp : public FWorkflowCentricApplication, public FEditorUndoClient, public FNotifyHook
{
	public:
		virtual void RegisterTabs(const TSharedRef<class FTabManager>& CustomTabManager);
		void InitEditor(const EToolkitMode::Type mode, const TSharedPtr<class IToolkitHost>& toolkitHost, UObject* inObject);

		class UCustomAsset* GetWorkingAsset(){ return _workingAsset; }
	
		// FAssetEditorToolkit interface
		virtual FName GetToolkitFName() const override { return FName(TEXT("CustomAssetEditorApp")); }
		virtual FText GetBaseToolkitName() const override {return FText::FromString(TEXT("CustomAssetEditorApp"));}
		virtual FString GetWorldCentricTabPrefix() const override { return TEXT("CustomAssetEditorApp"); }
		virtual FLinearColor GetWorldCentricTabColorScale() const override { return FLinearColor::Blue; }
		virtual FString GetDocumentationLink() const override { return TEXT("https://github.com/VanPhanMade/ToolingDemo"); }
		virtual void OnToolkitHostingStarted(const TSharedRef<IToolkit>& Toolkit) override { };
		virtual void OnToolkitHostingFinished(const TSharedRef<IToolkit>& Toolkit) override { };
	
	protected:

	private:
		UPROPERTY()
		class UCustomAsset* _workingAsset = nullptr;
};