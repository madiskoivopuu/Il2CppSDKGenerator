#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILightArmorIncEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILightArmorIncEntity"));
	}


	template <typename T = uintptr_t> T get_lightArmorInc() {
		return ((T (*)(ILightArmorIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasLightArmorInc() {
		return ((T (*)(ILightArmorIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddLightArmorInc(float newValue, uintptr_t newGroup) {
		return ((T (*)(ILightArmorIncEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceLightArmorInc(float newValue, uintptr_t newGroup) {
		return ((T (*)(ILightArmorIncEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveLightArmorInc() {
		return ((T (*)(ILightArmorIncEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
