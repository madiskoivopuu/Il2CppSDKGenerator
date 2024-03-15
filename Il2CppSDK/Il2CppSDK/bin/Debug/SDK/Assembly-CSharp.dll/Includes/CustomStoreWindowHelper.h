#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CustomStoreWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomStoreWindowHelper"));
	}


	template <typename R = CustomStoreWindow*> static R ShowCustomStore(UIWindowsManager* manager, int32_t targetId, StoreCategory* category) {
		return ((R (*)(void *, UIWindowsManager*, int32_t, StoreCategory*))(Il2CppBase() + 0x163B5F4))(0, manager, targetId, category);
	}
	template <typename R = CustomStoreWindow*> static R GetCustomStore(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x163B6C8))(0, manager);
	}
	template <typename R = void> static R CloseCustomStore(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x163B760))(0, manager, targetId);
	}

};

