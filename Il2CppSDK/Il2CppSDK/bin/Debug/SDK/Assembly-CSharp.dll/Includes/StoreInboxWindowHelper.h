#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreInboxWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreInboxWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowStoreInbox(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x182DD5C))(0, manager);
	}
	template <typename T = void> static T UpdateStoreInbox(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x182DDF4))(0, manager);
	}

};

}
