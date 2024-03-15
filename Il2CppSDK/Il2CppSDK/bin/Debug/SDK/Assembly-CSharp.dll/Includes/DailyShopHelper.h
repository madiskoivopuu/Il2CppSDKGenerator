#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DailyShopHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DailyShopHelper"));
	}


	template <typename R = bool> static R IsDailySlotSold(AccountEntity* account, int32_t slotIndex, int64_t resetTime, int32_t slotGradeLimit) {
		return ((R (*)(void *, AccountEntity*, int32_t, int64_t, int32_t))(Il2CppBase() + 0x1647724))(0, account, slotIndex, resetTime, slotGradeLimit);
	}
	template <typename R = int32_t> static R GetDailySlotPrice(DailyShopStateComponent* state, int32_t slotIndex, int32_t baseSilverPrice, float tax, int32_t stackCount) {
		return ((R (*)(void *, DailyShopStateComponent*, int32_t, int32_t, float, int32_t))(Il2CppBase() + 0x16477CC))(0, state, slotIndex, baseSilverPrice, tax, stackCount);
	}

};
