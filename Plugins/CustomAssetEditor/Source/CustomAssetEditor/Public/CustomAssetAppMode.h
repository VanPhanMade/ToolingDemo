#pragma once

#include "CoreMinimal.h"
#include "WorkflowOrientedApp/ApplicationMode.h"
#include "WorkflowOrientedApp/WorkflowTabManager.h"

class CustomAssetAppMode : public FApplicationMode
{
	public:
		CustomAssetAppMode(TSharedPtr<class CustomAssetEditorApp> app);

		virtual void RegisterTabFactories(TSharedPtr<FTabManager> InTabManager) override;
		virtual void PreDeactivateMode() override;
		virtual void PostActivateMode() override;
		
	protected:

	private:
		TWeakPtr<class CustomAssetEditorApp> _app;
		FWorkflowAllowedTabSet _tabs;
};
