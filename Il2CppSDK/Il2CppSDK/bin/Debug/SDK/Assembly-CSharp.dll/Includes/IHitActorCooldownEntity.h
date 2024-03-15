#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHitActorCooldownEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHitActorCooldownEntity"));
	}


	template <typename R = HitActorCooldownComponent*> R get_hitActorCooldown() {
		return ((R (*)(IHitActorCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasHitActorCooldown() {
		return ((R (*)(IHitActorCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddHitActorCooldown(bool newKilled, Il2CppArray<NameFloat>* newValues, Il2CppArray<Il2CppString*>* newTags) {
		return ((R (*)(IHitActorCooldownEntity*, bool, Il2CppArray<NameFloat>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newKilled, newValues, newTags);
	}
	template <typename R = void> R ReplaceHitActorCooldown(bool newKilled, Il2CppArray<NameFloat>* newValues, Il2CppArray<Il2CppString*>* newTags) {
		return ((R (*)(IHitActorCooldownEntity*, bool, Il2CppArray<NameFloat>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newKilled, newValues, newTags);
	}
	template <typename R = void> R RemoveHitActorCooldown() {
		return ((R (*)(IHitActorCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}

};

