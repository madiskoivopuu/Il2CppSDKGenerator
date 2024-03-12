#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmorDecEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmorDecEntity"));
	}


	template <typename T = uintptr_t> T get_armorDec() {
		return ((T (*)(IArmorDecEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmorDec() {
		return ((T (*)(IArmorDecEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmorDec(float newValue, uintptr_t newGroup) {
		return ((T (*)(IArmorDecEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceArmorDec(float newValue, uintptr_t newGroup) {
		return ((T (*)(IArmorDecEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveArmorDec() {
		return ((T (*)(IArmorDecEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
