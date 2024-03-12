#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHitActionEffectEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHitActionEffectEntity"));
	}


	template <typename T = uintptr_t> T get_hitActionEffect() {
		return ((T (*)(IHitActionEffectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasHitActionEffect() {
		return ((T (*)(IHitActionEffectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddHitActionEffect(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(IHitActionEffectEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename T = void> T ReplaceHitActionEffect(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(IHitActionEffectEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename T = void> T RemoveHitActionEffect() {
		return ((T (*)(IHitActionEffectEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
