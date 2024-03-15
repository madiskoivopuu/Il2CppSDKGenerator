#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyActorCooldownEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyActorCooldownEntity"));
	}


	template <typename R = ApplyActorCooldownComponent*> R get_applyActorCooldown() {
		return ((R (*)(IApplyActorCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasApplyActorCooldown() {
		return ((R (*)(IApplyActorCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddApplyActorCooldown(Il2CppArray<NameFloat>* newValues, Il2CppArray<Il2CppString*>* newTags) {
		return ((R (*)(IApplyActorCooldownEntity*, Il2CppArray<NameFloat>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newValues, newTags);
	}
	template <typename R = void> R ReplaceApplyActorCooldown(Il2CppArray<NameFloat>* newValues, Il2CppArray<Il2CppString*>* newTags) {
		return ((R (*)(IApplyActorCooldownEntity*, Il2CppArray<NameFloat>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newValues, newTags);
	}
	template <typename R = void> R RemoveApplyActorCooldown() {
		return ((R (*)(IApplyActorCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}

};

