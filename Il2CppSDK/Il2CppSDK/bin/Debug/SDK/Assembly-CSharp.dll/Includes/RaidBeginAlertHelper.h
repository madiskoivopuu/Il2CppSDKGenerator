#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RaidBeginAlertHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RaidBeginAlertHelper"));
	}


	template <typename T = uintptr_t> static T GetRaidBeginAlertWindow(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x170D100))(0, manager);
	}
	template <typename T = void> static T ApplyRaidBegin(uintptr_t manager, uintptr_t entity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x170D1D4))(0, manager, entity);
	}

};

}
