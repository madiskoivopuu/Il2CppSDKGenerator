#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IClassCooldownReduceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IClassCooldownReduceEntity"));
	}


	template <typename T = ClassCooldownReduceComponent*> T get_classCooldownReduce() {
		return ((T (*)(IClassCooldownReduceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasClassCooldownReduce() {
		return ((T (*)(IClassCooldownReduceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddClassCooldownReduce(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IClassCooldownReduceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceClassCooldownReduce(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IClassCooldownReduceEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveClassCooldownReduce() {
		return ((T (*)(IClassCooldownReduceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

