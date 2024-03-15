#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILifeStealEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILifeStealEntity"));
	}


	template <typename R = LifeStealComponent*> R get_lifeSteal() {
		return ((R (*)(ILifeStealEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasLifeSteal() {
		return ((R (*)(ILifeStealEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddLifeSteal(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(ILifeStealEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceLifeSteal(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(ILifeStealEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveLifeSteal() {
		return ((R (*)(ILifeStealEntity*))(Il2CppBase() + 0x0))(this);
	}

};

