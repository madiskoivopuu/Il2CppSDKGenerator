#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreProductDetailedWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreProductDetailedWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowPackDetailed(uintptr_t manager, int64_t storeId, uintptr_t category) {
		return ((T (*)(void *, uintptr_t, int64_t, uintptr_t))(Il2CppBase() + 0x1834B6C))(0, manager, storeId, category);
	}
	template <typename T = uintptr_t> static T ShowPackDetailed_1(uintptr_t manager, Il2CppString* storeDataBlueprintName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1834C58))(0, manager, storeDataBlueprintName);
	}
	template <typename T = void> static T UpdateStoreProductDetailedUI(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x183507C))(0, manager);
	}

};

}
