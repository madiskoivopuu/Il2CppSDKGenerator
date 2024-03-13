#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyActorCooldownEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyActorCooldownEntity"));
	}


	template <typename T = ApplyActorCooldownComponent*> T get_applyActorCooldown() {
		return ((T (*)(IApplyActorCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasApplyActorCooldown() {
		return ((T (*)(IApplyActorCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddApplyActorCooldown(Il2CppArray<uintptr_t>* newValues, Il2CppArray<uintptr_t>* newTags) {
		return ((T (*)(IApplyActorCooldownEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newValues, newTags);
	}
	template <typename T = void> T ReplaceApplyActorCooldown(Il2CppArray<uintptr_t>* newValues, Il2CppArray<uintptr_t>* newTags) {
		return ((T (*)(IApplyActorCooldownEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newValues, newTags);
	}
	template <typename T = void> T RemoveApplyActorCooldown() {
		return ((T (*)(IApplyActorCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}

};

