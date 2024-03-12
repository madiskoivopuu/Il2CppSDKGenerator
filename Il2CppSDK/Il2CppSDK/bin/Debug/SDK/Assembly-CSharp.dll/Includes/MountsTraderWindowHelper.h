#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountsTraderWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountsTraderWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowMountsTrader(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x155648C))(0, manager, targetId);
	}
	template <typename T = void> static T CloseMountsTrader(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1556558))(0, manager, targetId);
	}

};

}
