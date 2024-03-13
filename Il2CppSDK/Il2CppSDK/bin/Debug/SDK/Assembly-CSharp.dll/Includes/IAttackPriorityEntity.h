#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAttackPriorityEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAttackPriorityEntity"));
	}


	template <typename T = AttackPriorityComponent*> T get_attackPriority() {
		return ((T (*)(IAttackPriorityEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAttackPriority() {
		return ((T (*)(IAttackPriorityEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAttackPriority(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IAttackPriorityEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceAttackPriority(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IAttackPriorityEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveAttackPriority() {
		return ((T (*)(IAttackPriorityEntity*))(Il2CppBase() + 0x0))(this);
	}

};

