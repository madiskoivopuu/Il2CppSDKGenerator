#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DailyShopWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DailyShopWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowDailyShop(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x164A36C))(0, manager, targetId);
	}
	template <typename T = uintptr_t> static T GetDailyShop(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x164A438))(0, manager);
	}
	template <typename T = void> static T CloseDailyShop(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x164A4D0))(0, manager, targetId);
	}

};

}
