#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StatusBarHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StatusBarHelper"));
	}


	template <typename T = uintptr_t> static T GetStatusNameShow(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1490A78))(0, entity);
	}
	template <typename T = float> static T HPBarShowDuration(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1490AC4))(0, entity);
	}
	template <typename T = bool> static T ShowInfoBar(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1490B0C))(0, entity);
	}
	template <typename T = bool> static T ShowHealthCount(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1490B60))(0, entity);
	}
	template <typename T = uintptr_t> static T GetHelthBarColor(uintptr_t entity, uintptr_t defaultColor, uintptr_t ownerAccount) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1490BB4))(0, entity, defaultColor, ownerAccount);
	}

};

}
