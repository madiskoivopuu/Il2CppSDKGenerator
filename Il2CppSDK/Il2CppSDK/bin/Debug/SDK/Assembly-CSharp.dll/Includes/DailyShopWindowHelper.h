#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DailyShopWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DailyShopWindowHelper"));
	}


	template <typename T = DailyShopWindow*> static T ShowDailyShop(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x164A36C))(0, manager, targetId);
	}
	template <typename T = DailyShopWindow*> static T GetDailyShop(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x164A438))(0, manager);
	}
	template <typename T = void> static T CloseDailyShop(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x164A4D0))(0, manager, targetId);
	}

};

