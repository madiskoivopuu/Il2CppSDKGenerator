#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreProductDetailedWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreProductDetailedWindowHelper"));
	}


	template <typename T = StoreProductDetailedWindow*> static T ShowPackDetailed(UIWindowsManager* manager, int64_t storeId, Category* category) {
		return ((T (*)(void *, UIWindowsManager*, int64_t, Category*))(Il2CppBase() + 0x1834B6C))(0, manager, storeId, category);
	}
	template <typename T = StoreProductDetailedWindow*> static T ShowPackDetailed_1(UIWindowsManager* manager, Il2CppString* storeDataBlueprintName) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x1834C58))(0, manager, storeDataBlueprintName);
	}
	template <typename T = void> static T UpdateStoreProductDetailedUI(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x183507C))(0, manager);
	}

};

