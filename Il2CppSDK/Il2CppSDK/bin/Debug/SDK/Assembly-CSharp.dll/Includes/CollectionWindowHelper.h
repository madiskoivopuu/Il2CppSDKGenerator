#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CollectionWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CollectionWindowHelper"));
	}


	template <typename T = uintptr_t> static T GetCollectionWindow(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xE237C4))(0, manager);
	}
	template <typename T = uintptr_t> static T ShowCollectionWindow(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xE2385C))(0, manager, targetId);
	}
	template <typename T = void> static T CloseCollectionWindow(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xE23928))(0, manager, targetId);
	}

};

}
