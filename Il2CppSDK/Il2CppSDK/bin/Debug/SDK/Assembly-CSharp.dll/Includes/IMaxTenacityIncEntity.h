#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMaxTenacityIncEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMaxTenacityIncEntity"));
	}


	template <typename R = MaxTenacityIncComponent*> R get_maxTenacityInc() {
		return ((R (*)(IMaxTenacityIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMaxTenacityInc() {
		return ((R (*)(IMaxTenacityIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMaxTenacityInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IMaxTenacityIncEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMaxTenacityInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IMaxTenacityIncEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMaxTenacityInc() {
		return ((R (*)(IMaxTenacityIncEntity*))(Il2CppBase() + 0x0))(this);
	}

};

