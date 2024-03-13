#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMaxHealthIncEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMaxHealthIncEntity"));
	}


	template <typename T = MaxHealthIncComponent*> T get_maxHealthInc() {
		return ((T (*)(IMaxHealthIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMaxHealthInc() {
		return ((T (*)(IMaxHealthIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMaxHealthInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IMaxHealthIncEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMaxHealthInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IMaxHealthIncEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMaxHealthInc() {
		return ((T (*)(IMaxHealthIncEntity*))(Il2CppBase() + 0x0))(this);
	}

};

