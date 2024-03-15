#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConfigMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigMatcher"));
	}

	 static IMatcher1<ConfigEntity*>*& _matcherActorDamageModsCoef() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherAlvesBpPoints() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherAlvesWavesBadgesT1() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherAlvesWavesBadgesT2() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherAlvesWavesBadgesT3() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherBlueprint() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherCanBlocked() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherCanLifeSteal() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherCanReflect() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherCashbackCoins() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherCoins() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherConfigType() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherCyclicPoints() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherCyclicPremiumTokens() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherCyclicYmirSoul() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherDescription() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherDescriptionStats() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherEventBpPointsA() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherEventBpPointsB() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherEventBpPointsC() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherExtraLevelCap() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherFormatString() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherGiantReputation() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherGrade() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherGroupName() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherGuildBossCoins() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherGuildCoins() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherInfluence() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherInterrupt() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherOrder() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherOscillation() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherPlayerStatType() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherPortalsPoints() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherRaiseSelfHitTrigger() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherRaiseTargetHitTrigger() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherResources() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherSaviorPoints() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherSeasonPoints() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherSilver() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherTargetArmorCoef() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherTargetMitigationCoef() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherTickets() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherUseActorBonusVsTarget() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	 static IMatcher1<ConfigEntity*>*& _matcherVIPPoints() {
		return *(IMatcher1<ConfigEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x160);
	}

	 static IMatcher1<ConfigEntity*>* get_ActorDamageModsCoef() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15DEA14))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_AlvesBpPoints() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15DEB94))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_AlvesWavesBadgesT1() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15DED30))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_AlvesWavesBadgesT2() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15DEECC))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_AlvesWavesBadgesT3() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15DF068))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_Blueprint() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15DF204))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_CanBlocked() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15DF3A0))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_CanLifeSteal() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15DF53C))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_CanReflect() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15DF6D8))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_CashbackCoins() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15DF874))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_Coins() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15DFA10))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_ConfigType() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15DFBAC))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_CyclicPoints() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15DFD48))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_CyclicPremiumTokens() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15DFEE4))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_CyclicYmirSoul() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E0080))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_Description() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E021C))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_DescriptionStats() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E03B8))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_EventBpPointsA() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E0554))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_EventBpPointsB() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E06F0))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_EventBpPointsC() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E088C))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_ExtraLevelCap() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E0A28))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_FormatString() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E0BC4))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_GiantReputation() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E0D60))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_Grade() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E0EFC))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_GroupName() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E1098))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_GuildBossCoins() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E1234))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_GuildCoins() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E13D0))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_Influence() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E156C))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_Interrupt() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E1708))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_OldBlueprint() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E18A4))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_Order() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E1A40))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_Oscillation() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E1BDC))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_PlayerStatType() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E1D78))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_PortalsPoints() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E1F18))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_RaiseSelfHitTrigger() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E20B8))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_RaiseTargetHitTrigger() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E2258))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_Resources() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E23F8))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_SaviorPoints() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E2598))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_SeasonPoints() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E2738))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_Silver() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E28D8))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_TargetArmorCoef() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E2A78))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_TargetMitigationCoef() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E2C18))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_Tickets() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E2DB8))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_UseActorBonusVsTarget() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E2F58))(0);
	}
	 static IMatcher1<ConfigEntity*>* get_VIPPoints() {
		return ((IMatcher1<ConfigEntity*>* (*)(void *))(Il2CppBase() + 0x15E30F8))(0);
	}
	 static IAllOfMatcher1<ConfigEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<ConfigEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x15E3298))(0, indices);
	}
	 static IAllOfMatcher1<ConfigEntity*>* AllOf_1(Il2CppArray<IMatcher1<ConfigEntity*>*>* matchers) {
		return ((IAllOfMatcher1<ConfigEntity*>* (*)(void *, Il2CppArray<IMatcher1<ConfigEntity*>*>*))(Il2CppBase() + 0x15E3310))(0, matchers);
	}
	 static IAnyOfMatcher1<ConfigEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<ConfigEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x15E3388))(0, indices);
	}
	 static IAnyOfMatcher1<ConfigEntity*>* AnyOf_1(Il2CppArray<IMatcher1<ConfigEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<ConfigEntity*>* (*)(void *, Il2CppArray<IMatcher1<ConfigEntity*>*>*))(Il2CppBase() + 0x15E3400))(0, matchers);
	}

};

