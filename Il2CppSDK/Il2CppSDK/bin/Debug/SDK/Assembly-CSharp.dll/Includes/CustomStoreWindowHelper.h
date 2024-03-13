#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CustomStoreWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomStoreWindowHelper"));
	}


	template <typename T = CustomStoreWindow*> static T ShowCustomStore(UIWindowsManager* manager, int32_t targetId, StoreCategory* category) {
		return ((T (*)(void *, UIWindowsManager*, int32_t, StoreCategory*))(Il2CppBase() + 0x163B5F4))(0, manager, targetId, category);
	}
	template <typename T = CustomStoreWindow*> static T GetCustomStore(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x163B6C8))(0, manager);
	}
	template <typename T = void> static T CloseCustomStore(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x163B760))(0, manager, targetId);
	}

};

