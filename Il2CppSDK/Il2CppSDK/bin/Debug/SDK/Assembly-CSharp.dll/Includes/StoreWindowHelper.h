#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowStore(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x169CCAC))(0, manager);
	}
	template <typename T = uintptr_t> static T ShowStore_1(uintptr_t manager, uintptr_t categoryToOpen) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x169CD48))(0, manager, categoryToOpen);
	}
	template <typename T = void> static T ShowStoreCategory(uintptr_t manager, uintptr_t categoryToOpen) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x169CE88))(0, manager, categoryToOpen);
	}
	template <typename T = void> static T UpdateStore(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x169CF74))(0, manager);
	}

};

}
