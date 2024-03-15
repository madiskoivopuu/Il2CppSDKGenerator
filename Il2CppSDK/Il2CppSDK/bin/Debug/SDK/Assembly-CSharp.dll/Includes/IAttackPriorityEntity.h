#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAttackPriorityEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAttackPriorityEntity"));
	}


	template <typename R = AttackPriorityComponent*> R get_attackPriority() {
		return ((R (*)(IAttackPriorityEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAttackPriority() {
		return ((R (*)(IAttackPriorityEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAttackPriority(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IAttackPriorityEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceAttackPriority(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IAttackPriorityEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveAttackPriority() {
		return ((R (*)(IAttackPriorityEntity*))(Il2CppBase() + 0x0))(this);
	}

};

