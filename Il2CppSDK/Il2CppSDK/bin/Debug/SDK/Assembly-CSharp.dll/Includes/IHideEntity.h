#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHideEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHideEntity"));
	}


	template <typename T = uintptr_t> T get_hide() {
		return ((T (*)(IHideEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasHide() {
		return ((T (*)(IHideEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddHide(uintptr_t newFlag) {
		return ((T (*)(IHideEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newFlag);
	}
	template <typename T = void> T ReplaceHide(uintptr_t newFlag) {
		return ((T (*)(IHideEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newFlag);
	}
	template <typename T = void> T RemoveHide() {
		return ((T (*)(IHideEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
