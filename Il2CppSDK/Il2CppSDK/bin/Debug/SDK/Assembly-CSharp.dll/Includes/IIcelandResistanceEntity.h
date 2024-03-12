#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IIcelandResistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IIcelandResistanceEntity"));
	}


	template <typename T = uintptr_t> T get_icelandResistance() {
		return ((T (*)(IIcelandResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasIcelandResistance() {
		return ((T (*)(IIcelandResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddIcelandResistance(float newValue, uintptr_t newGroup) {
		return ((T (*)(IIcelandResistanceEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceIcelandResistance(float newValue, uintptr_t newGroup) {
		return ((T (*)(IIcelandResistanceEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveIcelandResistance() {
		return ((T (*)(IIcelandResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
