#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BopHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BopHelper"));
	}


	template <typename T = bool> static T IsBop(uintptr_t item, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16C9750))(0, item, world);
	}
	template <typename T = bool> static T BopCheck(uintptr_t fromInventory, uintptr_t world, uintptr_t toEntity, uintptr_t toInventory) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x16C97B4))(0, fromInventory, world, toEntity, toInventory);
	}
	template <typename T = bool> static T BopCheck_1(uintptr_t fromEntity, uintptr_t toEntity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16C9B84))(0, fromEntity, toEntity);
	}

};

}
