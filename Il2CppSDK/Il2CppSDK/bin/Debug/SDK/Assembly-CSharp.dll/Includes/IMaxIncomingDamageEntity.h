#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMaxIncomingDamageEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMaxIncomingDamageEntity"));
	}


	template <typename T = MaxIncomingDamageComponent*> T get_maxIncomingDamage() {
		return ((T (*)(IMaxIncomingDamageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMaxIncomingDamage() {
		return ((T (*)(IMaxIncomingDamageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMaxIncomingDamage(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IMaxIncomingDamageEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMaxIncomingDamage(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IMaxIncomingDamageEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMaxIncomingDamage() {
		return ((T (*)(IMaxIncomingDamageEntity*))(Il2CppBase() + 0x0))(this);
	}

};

