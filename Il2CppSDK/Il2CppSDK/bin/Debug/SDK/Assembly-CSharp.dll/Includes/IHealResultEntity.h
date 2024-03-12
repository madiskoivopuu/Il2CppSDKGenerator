#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHealResultEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHealResultEntity"));
	}


	template <typename T = uintptr_t> T get_healResult() {
		return ((T (*)(IHealResultEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasHealResult() {
		return ((T (*)(IHealResultEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddHealResult(uintptr_t newParams) {
		return ((T (*)(IHealResultEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newParams);
	}
	template <typename T = void> T ReplaceHealResult(uintptr_t newParams) {
		return ((T (*)(IHealResultEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newParams);
	}
	template <typename T = void> T RemoveHealResult() {
		return ((T (*)(IHealResultEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
