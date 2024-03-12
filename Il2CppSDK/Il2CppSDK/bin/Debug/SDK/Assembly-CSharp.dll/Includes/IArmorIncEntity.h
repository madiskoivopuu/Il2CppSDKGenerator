#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmorIncEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmorIncEntity"));
	}


	template <typename T = uintptr_t> T get_armorInc() {
		return ((T (*)(IArmorIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmorInc() {
		return ((T (*)(IArmorIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmorInc(float newValue, uintptr_t newGroup) {
		return ((T (*)(IArmorIncEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceArmorInc(float newValue, uintptr_t newGroup) {
		return ((T (*)(IArmorIncEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveArmorInc() {
		return ((T (*)(IArmorIncEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
