#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreWindowHelper"));
	}


	template <typename T = StoreWindow*> static T ShowStore(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x169CCAC))(0, manager);
	}
	template <typename T = StoreWindow*> static T ShowStore_1(UIWindowsManager* manager, StoreCategory* categoryToOpen) {
		return ((T (*)(void *, UIWindowsManager*, StoreCategory*))(Il2CppBase() + 0x169CD48))(0, manager, categoryToOpen);
	}
	template <typename T = void> static T ShowStoreCategory(UIWindowsManager* manager, StoreCategory* categoryToOpen) {
		return ((T (*)(void *, UIWindowsManager*, StoreCategory*))(Il2CppBase() + 0x169CE88))(0, manager, categoryToOpen);
	}
	template <typename T = void> static T UpdateStore(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x169CF74))(0, manager);
	}

};

