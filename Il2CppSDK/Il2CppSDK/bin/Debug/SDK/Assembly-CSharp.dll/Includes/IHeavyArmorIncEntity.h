#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHeavyArmorIncEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHeavyArmorIncEntity"));
	}


	template <typename T = uintptr_t> T get_heavyArmorInc() {
		return ((T (*)(IHeavyArmorIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasHeavyArmorInc() {
		return ((T (*)(IHeavyArmorIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddHeavyArmorInc(float newValue, uintptr_t newGroup) {
		return ((T (*)(IHeavyArmorIncEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceHeavyArmorInc(float newValue, uintptr_t newGroup) {
		return ((T (*)(IHeavyArmorIncEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveHeavyArmorInc() {
		return ((T (*)(IHeavyArmorIncEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
