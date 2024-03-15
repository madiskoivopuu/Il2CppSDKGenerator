#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreSingleDetailedWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreSingleDetailedWindowHelper"));
	}


	template <typename R = StoreSingleDetailedWindow*> static R ShowStoreSingleDetailed(UIWindowsManager* manager, int64_t storeId, Category* category) {
		return ((R (*)(void *, UIWindowsManager*, int64_t, Category*))(Il2CppBase() + 0x1846890))(0, manager, storeId, category);
	}

};

