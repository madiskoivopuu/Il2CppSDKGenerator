#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMaxTenacityEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMaxTenacityEntity"));
	}


	template <typename R = MaxTenacityComponent*> R get_maxTenacity() {
		return ((R (*)(IMaxTenacityEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMaxTenacity() {
		return ((R (*)(IMaxTenacityEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMaxTenacity(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IMaxTenacityEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMaxTenacity(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IMaxTenacityEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMaxTenacity() {
		return ((R (*)(IMaxTenacityEntity*))(Il2CppBase() + 0x0))(this);
	}

};

