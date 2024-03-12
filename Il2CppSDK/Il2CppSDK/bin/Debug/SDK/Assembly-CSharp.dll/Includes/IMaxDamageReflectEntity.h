#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMaxDamageReflectEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMaxDamageReflectEntity"));
	}


	template <typename T = uintptr_t> T get_maxDamageReflect() {
		return ((T (*)(IMaxDamageReflectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMaxDamageReflect() {
		return ((T (*)(IMaxDamageReflectEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMaxDamageReflect(float newValue, uintptr_t newGroup) {
		return ((T (*)(IMaxDamageReflectEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMaxDamageReflect(float newValue, uintptr_t newGroup) {
		return ((T (*)(IMaxDamageReflectEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMaxDamageReflect() {
		return ((T (*)(IMaxDamageReflectEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
