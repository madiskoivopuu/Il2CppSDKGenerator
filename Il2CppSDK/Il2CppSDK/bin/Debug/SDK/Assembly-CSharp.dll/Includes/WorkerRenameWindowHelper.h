#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WorkerRenameWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WorkerRenameWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowWorkerRename(uintptr_t manager, int32_t furnitureId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1130E88))(0, manager, furnitureId);
	}
	template <typename T = uintptr_t> static T GetWorkerRename(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1130F30))(0, manager);
	}

};

}
