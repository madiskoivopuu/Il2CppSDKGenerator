#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreSingleDetailedWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreSingleDetailedWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowStoreSingleDetailed(uintptr_t manager, int64_t storeId, uintptr_t category) {
		return ((T (*)(void *, uintptr_t, int64_t, uintptr_t))(Il2CppBase() + 0x1846890))(0, manager, storeId, category);
	}

};

}
