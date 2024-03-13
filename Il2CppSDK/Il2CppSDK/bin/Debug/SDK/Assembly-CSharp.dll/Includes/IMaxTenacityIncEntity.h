#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMaxTenacityIncEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMaxTenacityIncEntity"));
	}


	template <typename T = MaxTenacityIncComponent*> T get_maxTenacityInc() {
		return ((T (*)(IMaxTenacityIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMaxTenacityInc() {
		return ((T (*)(IMaxTenacityIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMaxTenacityInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IMaxTenacityIncEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMaxTenacityInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IMaxTenacityIncEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMaxTenacityInc() {
		return ((T (*)(IMaxTenacityIncEntity*))(Il2CppBase() + 0x0))(this);
	}

};

