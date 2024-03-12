#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHealEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHealEntity"));
	}


	template <typename T = uintptr_t> T get_heal() {
		return ((T (*)(IHealEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasHeal() {
		return ((T (*)(IHealEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddHeal(float newValue) {
		return ((T (*)(IHealEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceHeal(float newValue) {
		return ((T (*)(IHealEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveHeal() {
		return ((T (*)(IHealEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
