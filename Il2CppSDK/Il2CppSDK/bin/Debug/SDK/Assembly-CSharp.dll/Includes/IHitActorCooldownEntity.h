#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHitActorCooldownEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHitActorCooldownEntity"));
	}


	template <typename T = HitActorCooldownComponent*> T get_hitActorCooldown() {
		return ((T (*)(IHitActorCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasHitActorCooldown() {
		return ((T (*)(IHitActorCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddHitActorCooldown(bool newKilled, Il2CppArray<uintptr_t>* newValues, Il2CppArray<uintptr_t>* newTags) {
		return ((T (*)(IHitActorCooldownEntity*, bool, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newKilled, newValues, newTags);
	}
	template <typename T = void> T ReplaceHitActorCooldown(bool newKilled, Il2CppArray<uintptr_t>* newValues, Il2CppArray<uintptr_t>* newTags) {
		return ((T (*)(IHitActorCooldownEntity*, bool, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newKilled, newValues, newTags);
	}
	template <typename T = void> T RemoveHitActorCooldown() {
		return ((T (*)(IHitActorCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}

};

