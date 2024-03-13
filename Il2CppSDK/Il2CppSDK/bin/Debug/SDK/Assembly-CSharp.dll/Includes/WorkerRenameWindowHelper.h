#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WorkerRenameWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WorkerRenameWindowHelper"));
	}


	template <typename T = WorkerRenameWindow*> static T ShowWorkerRename(UIWindowsManager* manager, int32_t furnitureId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1130E88))(0, manager, furnitureId);
	}
	template <typename T = WorkerRenameWindow*> static T GetWorkerRename(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1130F30))(0, manager);
	}

};

