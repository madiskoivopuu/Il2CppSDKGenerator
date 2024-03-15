#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TransactionMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TransactionMatcher"));
	}

	 static IMatcher1<TransactionEntity*>*& _matcherAddExperience() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherAddPetExperience() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherAlvesBpPoints() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherAlvesWavesBadgesT1() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherAlvesWavesBadgesT2() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherAlvesWavesBadgesT3() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherAnalyticsData() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherBattlePassAddLevels() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherCallback() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherCashbackCoins() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherCoins() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherCyclicPoints() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherCyclicPremiumTokens() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherCyclicYmirSoul() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherEventBpPointsA() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherEventBpPointsB() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherEventBpPointsC() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherExperienceBoosterDuration() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherExtraLevelCap() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherGiantReputation() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherGuildBossCoins() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherGuildCoins() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherHuaweiToken() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherInfluence() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherMessageId() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherPlayerId() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherPoint() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherPortalsPoints() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherPurchaceError() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherQuest() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherReceipt() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherResources() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherSavingsPackLevel() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherSaviorPoints() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherSeasonPoints() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherSilver() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherStore() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherStoreExp() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherTickets() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherTournamentPoints() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherTransaction() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherTransactionType() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherUSDPrice() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherUnlockPremium() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherVIPPoints() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	 static IMatcher1<TransactionEntity*>*& _matcherVipResources() {
		return *(IMatcher1<TransactionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x168);
	}

	 static IMatcher1<TransactionEntity*>* get_AddExperience() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x151E6F4))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_AddPetExperience() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x151E874))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_AlvesBpPoints() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x151EA10))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_AlvesWavesBadgesT1() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x151EBAC))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_AlvesWavesBadgesT2() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x151ED48))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_AlvesWavesBadgesT3() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x151EEE4))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_AnalyticsData() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x151F080))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_BattlePassAddLevels() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x151F21C))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_Callback() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x151F3B8))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_CashbackCoins() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x151F554))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_Coins() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x151F6F0))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_CyclicPoints() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x151F88C))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_CyclicPremiumTokens() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x151FA28))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_CyclicYmirSoul() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x151FBC4))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_EventBpPointsA() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x151FD60))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_EventBpPointsB() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x151FEFC))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_EventBpPointsC() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x1520098))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_ExperienceBoosterDuration() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x1520234))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_ExtraLevelCap() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x15203D0))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_GiantReputation() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x152056C))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_GuildBossCoins() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x1520708))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_GuildCoins() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x15208A4))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_HuaweiToken() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x1520A40))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_Influence() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x1520BDC))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_MessageId() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x1520D78))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_PlayerId() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x15157B4))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_Point() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x1520F14))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_PortalsPoints() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x15210B0))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_PurchaceError() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x152124C))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_Quest() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x15213E8))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_Receipt() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x1515618))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_Resources() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x1521584))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_SavingsPackLevel() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x1521720))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_SaviorPoints() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x15218C0))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_SeasonPoints() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x1521A60))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_Silver() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x1521C00))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_Store() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x1521DA0))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_StoreExp() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x1521F40))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_Tickets() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x15220E0))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_TournamentPoints() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x1522280))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_Transaction() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x1515478))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_TransactionType() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x1515950))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_USDPrice() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x1522420))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_UnlockPremium() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x15225C0))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_VIPPoints() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x1522760))(0);
	}
	 static IMatcher1<TransactionEntity*>* get_VipResources() {
		return ((IMatcher1<TransactionEntity*>* (*)(void *))(Il2CppBase() + 0x1522900))(0);
	}
	 static IAllOfMatcher1<TransactionEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<TransactionEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1522AA0))(0, indices);
	}
	 static IAllOfMatcher1<TransactionEntity*>* AllOf_1(Il2CppArray<IMatcher1<TransactionEntity*>*>* matchers) {
		return ((IAllOfMatcher1<TransactionEntity*>* (*)(void *, Il2CppArray<IMatcher1<TransactionEntity*>*>*))(Il2CppBase() + 0x1515AF0))(0, matchers);
	}
	 static IAnyOfMatcher1<TransactionEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<TransactionEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1522B18))(0, indices);
	}
	 static IAnyOfMatcher1<TransactionEntity*>* AnyOf_1(Il2CppArray<IMatcher1<TransactionEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<TransactionEntity*>* (*)(void *, Il2CppArray<IMatcher1<TransactionEntity*>*>*))(Il2CppBase() + 0x1522B90))(0, matchers);
	}

};

