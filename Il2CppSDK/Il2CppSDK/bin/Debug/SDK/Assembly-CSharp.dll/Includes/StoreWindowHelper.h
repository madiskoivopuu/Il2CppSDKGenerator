#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreWindowHelper"));
	}


	template <typename R = StoreWindow*> static R ShowStore(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x169CCAC))(0, manager);
	}
	template <typename R = StoreWindow*> static R ShowStore_1(UIWindowsManager* manager, StoreCategory categoryToOpen) {
		return ((R (*)(void *, UIWindowsManager*, StoreCategory))(Il2CppBase() + 0x169CD48))(0, manager, categoryToOpen);
	}
	template <typename R = void> static R ShowStoreCategory(UIWindowsManager* manager, StoreCategory categoryToOpen) {
		return ((R (*)(void *, UIWindowsManager*, StoreCategory))(Il2CppBase() + 0x169CE88))(0, manager, categoryToOpen);
	}
	template <typename R = void> static R UpdateStore(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x169CF74))(0, manager);
	}

};

