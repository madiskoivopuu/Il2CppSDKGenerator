#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGroupCooldownEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGroupCooldownEntity"));
	}


	template <typename R = GroupCooldownComponent*> R get_groupCooldown() {
		return ((R (*)(IGroupCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasGroupCooldown() {
		return ((R (*)(IGroupCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddGroupCooldown(Il2CppArray<NameFloat*>* newValues) {
		return ((R (*)(IGroupCooldownEntity*, Il2CppArray<NameFloat*>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename R = void> R ReplaceGroupCooldown(Il2CppArray<NameFloat*>* newValues) {
		return ((R (*)(IGroupCooldownEntity*, Il2CppArray<NameFloat*>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename R = void> R RemoveGroupCooldown() {
		return ((R (*)(IGroupCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}

};

