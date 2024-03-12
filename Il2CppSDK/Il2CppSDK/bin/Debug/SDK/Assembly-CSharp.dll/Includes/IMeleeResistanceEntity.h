#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMeleeResistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMeleeResistanceEntity"));
	}


	template <typename T = uintptr_t> T get_meleeResistance() {
		return ((T (*)(IMeleeResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMeleeResistance() {
		return ((T (*)(IMeleeResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMeleeResistance(float newValue, uintptr_t newGroup) {
		return ((T (*)(IMeleeResistanceEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMeleeResistance(float newValue, uintptr_t newGroup) {
		return ((T (*)(IMeleeResistanceEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMeleeResistance() {
		return ((T (*)(IMeleeResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
