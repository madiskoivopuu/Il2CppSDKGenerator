#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInstantEffectEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInstantEffectEntity"));
	}


	template <typename T = uintptr_t> T get_instantEffect() {
		return ((T (*)(IInstantEffectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasInstantEffect() {
		return ((T (*)(IInstantEffectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddInstantEffect(Il2CppString* newStart, Il2CppString* newSelf, Il2CppArray<uintptr_t>* newTarget, Il2CppString* newTrail) {
		return ((T (*)(IInstantEffectEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x0))(this, newStart, newSelf, newTarget, newTrail);
	}
	template <typename T = void> T ReplaceInstantEffect(Il2CppString* newStart, Il2CppString* newSelf, Il2CppArray<uintptr_t>* newTarget, Il2CppString* newTrail) {
		return ((T (*)(IInstantEffectEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x0))(this, newStart, newSelf, newTarget, newTrail);
	}
	template <typename T = void> T RemoveInstantEffect() {
		return ((T (*)(IInstantEffectEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
