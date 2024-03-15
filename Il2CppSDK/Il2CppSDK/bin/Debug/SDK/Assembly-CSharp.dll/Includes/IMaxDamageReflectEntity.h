#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMaxDamageReflectEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMaxDamageReflectEntity"));
	}


	template <typename R = MaxDamageReflectComponent*> R get_maxDamageReflect() {
		return ((R (*)(IMaxDamageReflectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMaxDamageReflect() {
		return ((R (*)(IMaxDamageReflectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMaxDamageReflect(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IMaxDamageReflectEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMaxDamageReflect(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IMaxDamageReflectEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMaxDamageReflect() {
		return ((R (*)(IMaxDamageReflectEntity*))(Il2CppBase() + 0x0))(this);
	}

};

