#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMaxHealthIncEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMaxHealthIncEntity"));
	}


	template <typename R = MaxHealthIncComponent*> R get_maxHealthInc() {
		return ((R (*)(IMaxHealthIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMaxHealthInc() {
		return ((R (*)(IMaxHealthIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMaxHealthInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IMaxHealthIncEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMaxHealthInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IMaxHealthIncEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMaxHealthInc() {
		return ((R (*)(IMaxHealthIncEntity*))(Il2CppBase() + 0x0))(this);
	}

};

