#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IClassCooldownReduceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IClassCooldownReduceEntity"));
	}


	template <typename R = ClassCooldownReduceComponent*> R get_classCooldownReduce() {
		return ((R (*)(IClassCooldownReduceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasClassCooldownReduce() {
		return ((R (*)(IClassCooldownReduceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddClassCooldownReduce(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IClassCooldownReduceEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceClassCooldownReduce(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IClassCooldownReduceEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveClassCooldownReduce() {
		return ((R (*)(IClassCooldownReduceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

