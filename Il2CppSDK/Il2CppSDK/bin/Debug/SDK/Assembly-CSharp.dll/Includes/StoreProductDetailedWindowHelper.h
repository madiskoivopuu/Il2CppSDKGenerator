#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreProductDetailedWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreProductDetailedWindowHelper"));
	}


	template <typename R = StoreProductDetailedWindow*> static R ShowPackDetailed(UIWindowsManager* manager, int64_t storeId, Category category) {
		return ((R (*)(void *, UIWindowsManager*, int64_t, Category))(Il2CppBase() + 0x1834B6C))(0, manager, storeId, category);
	}
	template <typename R = StoreProductDetailedWindow*> static R ShowPackDetailed_1(UIWindowsManager* manager, Il2CppString* storeDataBlueprintName) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x1834C58))(0, manager, storeDataBlueprintName);
	}
	template <typename R = void> static R UpdateStoreProductDetailedUI(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x183507C))(0, manager);
	}

};

