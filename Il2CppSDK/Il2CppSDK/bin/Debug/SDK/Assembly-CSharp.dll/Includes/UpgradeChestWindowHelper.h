#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpgradeChestWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpgradeChestWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowUpgradeChest(uintptr_t manager, int32_t targetId, void* onUpgrade) {
		return ((T (*)(void *, uintptr_t, int32_t, void*))(Il2CppBase() + 0x154267C))(0, manager, targetId, onUpgrade);
	}

};

}
