#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CustomStoreWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomStoreWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowCustomStore(uintptr_t manager, int32_t targetId, uintptr_t category) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x163B5F4))(0, manager, targetId, category);
	}
	template <typename T = uintptr_t> static T GetCustomStore(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x163B6C8))(0, manager);
	}
	template <typename T = void> static T CloseCustomStore(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x163B760))(0, manager, targetId);
	}

};

}
