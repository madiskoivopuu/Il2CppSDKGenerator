#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TransactionMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TransactionMatcher"));
	}

	template <typename T = void*> static T& _matcherAddExperience() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _matcherAddPetExperience() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& _matcherAlvesBpPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& _matcherAlvesWavesBadgesT1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& _matcherAlvesWavesBadgesT2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& _matcherAlvesWavesBadgesT3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& _matcherAnalyticsData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& _matcherBattlePassAddLevels() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& _matcherCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& _matcherCashbackCoins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = void*> static T& _matcherCoins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = void*> static T& _matcherCyclicPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = void*> static T& _matcherCyclicPremiumTokens() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = void*> static T& _matcherCyclicYmirSoul() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = void*> static T& _matcherEventBpPointsA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = void*> static T& _matcherEventBpPointsB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = void*> static T& _matcherEventBpPointsC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = void*> static T& _matcherExperienceBoosterDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = void*> static T& _matcherExtraLevelCap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = void*> static T& _matcherGiantReputation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = void*> static T& _matcherGuildBossCoins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = void*> static T& _matcherGuildCoins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = void*> static T& _matcherHuaweiToken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = void*> static T& _matcherInfluence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = void*> static T& _matcherMessageId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = void*> static T& _matcherPlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = void*> static T& _matcherPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = void*> static T& _matcherPortalsPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = void*> static T& _matcherPurchaceError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = void*> static T& _matcherQuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = void*> static T& _matcherReceipt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = void*> static T& _matcherResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = void*> static T& _matcherSavingsPackLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = void*> static T& _matcherSaviorPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = void*> static T& _matcherSeasonPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = void*> static T& _matcherSilver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = void*> static T& _matcherStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = void*> static T& _matcherStoreExp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = void*> static T& _matcherTickets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = void*> static T& _matcherTournamentPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = void*> static T& _matcherTransaction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = void*> static T& _matcherTransactionType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = void*> static T& _matcherUSDPrice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = void*> static T& _matcherUnlockPremium() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = void*> static T& _matcherVIPPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = void*> static T& _matcherVipResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}

	template <typename T = void*> static T get_AddExperience() {
		return ((T (*)(void *))(Il2CppBase() + 0x151E6F4))(0);
	}
	template <typename T = void*> static T get_AddPetExperience() {
		return ((T (*)(void *))(Il2CppBase() + 0x151E874))(0);
	}
	template <typename T = void*> static T get_AlvesBpPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x151EA10))(0);
	}
	template <typename T = void*> static T get_AlvesWavesBadgesT1() {
		return ((T (*)(void *))(Il2CppBase() + 0x151EBAC))(0);
	}
	template <typename T = void*> static T get_AlvesWavesBadgesT2() {
		return ((T (*)(void *))(Il2CppBase() + 0x151ED48))(0);
	}
	template <typename T = void*> static T get_AlvesWavesBadgesT3() {
		return ((T (*)(void *))(Il2CppBase() + 0x151EEE4))(0);
	}
	template <typename T = void*> static T get_AnalyticsData() {
		return ((T (*)(void *))(Il2CppBase() + 0x151F080))(0);
	}
	template <typename T = void*> static T get_BattlePassAddLevels() {
		return ((T (*)(void *))(Il2CppBase() + 0x151F21C))(0);
	}
	template <typename T = void*> static T get_Callback() {
		return ((T (*)(void *))(Il2CppBase() + 0x151F3B8))(0);
	}
	template <typename T = void*> static T get_CashbackCoins() {
		return ((T (*)(void *))(Il2CppBase() + 0x151F554))(0);
	}
	template <typename T = void*> static T get_Coins() {
		return ((T (*)(void *))(Il2CppBase() + 0x151F6F0))(0);
	}
	template <typename T = void*> static T get_CyclicPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x151F88C))(0);
	}
	template <typename T = void*> static T get_CyclicPremiumTokens() {
		return ((T (*)(void *))(Il2CppBase() + 0x151FA28))(0);
	}
	template <typename T = void*> static T get_CyclicYmirSoul() {
		return ((T (*)(void *))(Il2CppBase() + 0x151FBC4))(0);
	}
	template <typename T = void*> static T get_EventBpPointsA() {
		return ((T (*)(void *))(Il2CppBase() + 0x151FD60))(0);
	}
	template <typename T = void*> static T get_EventBpPointsB() {
		return ((T (*)(void *))(Il2CppBase() + 0x151FEFC))(0);
	}
	template <typename T = void*> static T get_EventBpPointsC() {
		return ((T (*)(void *))(Il2CppBase() + 0x1520098))(0);
	}
	template <typename T = void*> static T get_ExperienceBoosterDuration() {
		return ((T (*)(void *))(Il2CppBase() + 0x1520234))(0);
	}
	template <typename T = void*> static T get_ExtraLevelCap() {
		return ((T (*)(void *))(Il2CppBase() + 0x15203D0))(0);
	}
	template <typename T = void*> static T get_GiantReputation() {
		return ((T (*)(void *))(Il2CppBase() + 0x152056C))(0);
	}
	template <typename T = void*> static T get_GuildBossCoins() {
		return ((T (*)(void *))(Il2CppBase() + 0x1520708))(0);
	}
	template <typename T = void*> static T get_GuildCoins() {
		return ((T (*)(void *))(Il2CppBase() + 0x15208A4))(0);
	}
	template <typename T = void*> static T get_HuaweiToken() {
		return ((T (*)(void *))(Il2CppBase() + 0x1520A40))(0);
	}
	template <typename T = void*> static T get_Influence() {
		return ((T (*)(void *))(Il2CppBase() + 0x1520BDC))(0);
	}
	template <typename T = void*> static T get_MessageId() {
		return ((T (*)(void *))(Il2CppBase() + 0x1520D78))(0);
	}
	template <typename T = void*> static T get_PlayerId() {
		return ((T (*)(void *))(Il2CppBase() + 0x15157B4))(0);
	}
	template <typename T = void*> static T get_Point() {
		return ((T (*)(void *))(Il2CppBase() + 0x1520F14))(0);
	}
	template <typename T = void*> static T get_PortalsPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x15210B0))(0);
	}
	template <typename T = void*> static T get_PurchaceError() {
		return ((T (*)(void *))(Il2CppBase() + 0x152124C))(0);
	}
	template <typename T = void*> static T get_Quest() {
		return ((T (*)(void *))(Il2CppBase() + 0x15213E8))(0);
	}
	template <typename T = void*> static T get_Receipt() {
		return ((T (*)(void *))(Il2CppBase() + 0x1515618))(0);
	}
	template <typename T = void*> static T get_Resources() {
		return ((T (*)(void *))(Il2CppBase() + 0x1521584))(0);
	}
	template <typename T = void*> static T get_SavingsPackLevel() {
		return ((T (*)(void *))(Il2CppBase() + 0x1521720))(0);
	}
	template <typename T = void*> static T get_SaviorPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x15218C0))(0);
	}
	template <typename T = void*> static T get_SeasonPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x1521A60))(0);
	}
	template <typename T = void*> static T get_Silver() {
		return ((T (*)(void *))(Il2CppBase() + 0x1521C00))(0);
	}
	template <typename T = void*> static T get_Store() {
		return ((T (*)(void *))(Il2CppBase() + 0x1521DA0))(0);
	}
	template <typename T = void*> static T get_StoreExp() {
		return ((T (*)(void *))(Il2CppBase() + 0x1521F40))(0);
	}
	template <typename T = void*> static T get_Tickets() {
		return ((T (*)(void *))(Il2CppBase() + 0x15220E0))(0);
	}
	template <typename T = void*> static T get_TournamentPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x1522280))(0);
	}
	template <typename T = void*> static T get_Transaction() {
		return ((T (*)(void *))(Il2CppBase() + 0x1515478))(0);
	}
	template <typename T = void*> static T get_TransactionType() {
		return ((T (*)(void *))(Il2CppBase() + 0x1515950))(0);
	}
	template <typename T = void*> static T get_USDPrice() {
		return ((T (*)(void *))(Il2CppBase() + 0x1522420))(0);
	}
	template <typename T = void*> static T get_UnlockPremium() {
		return ((T (*)(void *))(Il2CppBase() + 0x15225C0))(0);
	}
	template <typename T = void*> static T get_VIPPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x1522760))(0);
	}
	template <typename T = void*> static T get_VipResources() {
		return ((T (*)(void *))(Il2CppBase() + 0x1522900))(0);
	}
	template <typename T = void*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1522AA0))(0, indices);
	}
	template <typename T = void*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1515AF0))(0, matchers);
	}
	template <typename T = void*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1522B18))(0, indices);
	}
	template <typename T = void*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1522B90))(0, matchers);
	}

};

}
