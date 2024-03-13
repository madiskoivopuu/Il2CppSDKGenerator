#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMaxTenacityEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMaxTenacityEntity"));
	}


	template <typename T = MaxTenacityComponent*> T get_maxTenacity() {
		return ((T (*)(IMaxTenacityEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMaxTenacity() {
		return ((T (*)(IMaxTenacityEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMaxTenacity(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IMaxTenacityEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMaxTenacity(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IMaxTenacityEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMaxTenacity() {
		return ((T (*)(IMaxTenacityEntity*))(Il2CppBase() + 0x0))(this);
	}

};

