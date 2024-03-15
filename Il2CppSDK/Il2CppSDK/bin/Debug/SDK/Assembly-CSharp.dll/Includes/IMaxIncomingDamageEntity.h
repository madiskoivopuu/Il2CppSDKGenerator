#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMaxIncomingDamageEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMaxIncomingDamageEntity"));
	}


	template <typename R = MaxIncomingDamageComponent*> R get_maxIncomingDamage() {
		return ((R (*)(IMaxIncomingDamageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMaxIncomingDamage() {
		return ((R (*)(IMaxIncomingDamageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMaxIncomingDamage(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IMaxIncomingDamageEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMaxIncomingDamage(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IMaxIncomingDamageEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMaxIncomingDamage() {
		return ((R (*)(IMaxIncomingDamageEntity*))(Il2CppBase() + 0x0))(this);
	}

};

