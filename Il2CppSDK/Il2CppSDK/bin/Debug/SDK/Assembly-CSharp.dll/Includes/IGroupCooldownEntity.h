#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGroupCooldownEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGroupCooldownEntity"));
	}


	template <typename T = GroupCooldownComponent*> T get_groupCooldown() {
		return ((T (*)(IGroupCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasGroupCooldown() {
		return ((T (*)(IGroupCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddGroupCooldown(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(IGroupCooldownEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename T = void> T ReplaceGroupCooldown(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(IGroupCooldownEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename T = void> T RemoveGroupCooldown() {
		return ((T (*)(IGroupCooldownEntity*))(Il2CppBase() + 0x0))(this);
	}

};

