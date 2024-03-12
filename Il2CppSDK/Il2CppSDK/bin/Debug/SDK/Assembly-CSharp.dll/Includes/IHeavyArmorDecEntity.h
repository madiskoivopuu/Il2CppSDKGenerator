#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHeavyArmorDecEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHeavyArmorDecEntity"));
	}


	template <typename T = uintptr_t> T get_heavyArmorDec() {
		return ((T (*)(IHeavyArmorDecEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasHeavyArmorDec() {
		return ((T (*)(IHeavyArmorDecEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddHeavyArmorDec(float newValue, uintptr_t newGroup) {
		return ((T (*)(IHeavyArmorDecEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceHeavyArmorDec(float newValue, uintptr_t newGroup) {
		return ((T (*)(IHeavyArmorDecEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveHeavyArmorDec() {
		return ((T (*)(IHeavyArmorDecEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
