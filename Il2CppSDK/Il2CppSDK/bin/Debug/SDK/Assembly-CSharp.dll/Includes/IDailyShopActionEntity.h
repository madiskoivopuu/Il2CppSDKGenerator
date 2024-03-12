#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDailyShopActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDailyShopActionEntity"));
	}


	template <typename T = uintptr_t> T get_dailyShopAction() {
		return ((T (*)(IDailyShopActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDailyShopAction() {
		return ((T (*)(IDailyShopActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDailyShopAction(Il2CppString* newName) {
		return ((T (*)(IDailyShopActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceDailyShopAction(Il2CppString* newName) {
		return ((T (*)(IDailyShopActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveDailyShopAction() {
		return ((T (*)(IDailyShopActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
