#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDailyShopActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDailyShopActionEntity"));
	}


	template <typename R = DailyShopActionComponent*> R get_dailyShopAction() {
		return ((R (*)(IDailyShopActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDailyShopAction() {
		return ((R (*)(IDailyShopActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDailyShopAction(Il2CppString* newName) {
		return ((R (*)(IDailyShopActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceDailyShopAction(Il2CppString* newName) {
		return ((R (*)(IDailyShopActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveDailyShopAction() {
		return ((R (*)(IDailyShopActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

