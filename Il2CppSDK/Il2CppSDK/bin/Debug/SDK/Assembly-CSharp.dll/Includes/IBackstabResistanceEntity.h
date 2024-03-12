#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBackstabResistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBackstabResistanceEntity"));
	}


	template <typename T = uintptr_t> T get_backstabResistance() {
		return ((T (*)(IBackstabResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasBackstabResistance() {
		return ((T (*)(IBackstabResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddBackstabResistance(float newValue, uintptr_t newGroup) {
		return ((T (*)(IBackstabResistanceEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceBackstabResistance(float newValue, uintptr_t newGroup) {
		return ((T (*)(IBackstabResistanceEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveBackstabResistance() {
		return ((T (*)(IBackstabResistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
