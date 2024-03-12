#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConfigMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigMatcher"));
	}

	template <typename T = void*> static T& _matcherActorDamageModsCoef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _matcherAlvesBpPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& _matcherAlvesWavesBadgesT1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& _matcherAlvesWavesBadgesT2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& _matcherAlvesWavesBadgesT3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& _matcherBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& _matcherCanBlocked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& _matcherCanLifeSteal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& _matcherCanReflect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& _matcherCashbackCoins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = void*> static T& _matcherCoins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = void*> static T& _matcherConfigType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = void*> static T& _matcherCyclicPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = void*> static T& _matcherCyclicPremiumTokens() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = void*> static T& _matcherCyclicYmirSoul() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = void*> static T& _matcherDescription() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = void*> static T& _matcherDescriptionStats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = void*> static T& _matcherEventBpPointsA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = void*> static T& _matcherEventBpPointsB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = void*> static T& _matcherEventBpPointsC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = void*> static T& _matcherExtraLevelCap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = void*> static T& _matcherFormatString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = void*> static T& _matcherGiantReputation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = void*> static T& _matcherGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = void*> static T& _matcherGroupName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = void*> static T& _matcherGuildBossCoins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = void*> static T& _matcherGuildCoins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = void*> static T& _matcherInfluence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = void*> static T& _matcherInterrupt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = void*> static T& _matcherOldBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = void*> static T& _matcherOrder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = void*> static T& _matcherOscillation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = void*> static T& _matcherPlayerStatType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = void*> static T& _matcherPortalsPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = void*> static T& _matcherRaiseSelfHitTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = void*> static T& _matcherRaiseTargetHitTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = void*> static T& _matcherResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = void*> static T& _matcherSaviorPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = void*> static T& _matcherSeasonPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = void*> static T& _matcherSilver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = void*> static T& _matcherTargetArmorCoef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = void*> static T& _matcherTargetMitigationCoef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = void*> static T& _matcherTickets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = void*> static T& _matcherUseActorBonusVsTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = void*> static T& _matcherVIPPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}

	template <typename T = void*> static T get_ActorDamageModsCoef() {
		return ((T (*)(void *))(Il2CppBase() + 0x15DEA14))(0);
	}
	template <typename T = void*> static T get_AlvesBpPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x15DEB94))(0);
	}
	template <typename T = void*> static T get_AlvesWavesBadgesT1() {
		return ((T (*)(void *))(Il2CppBase() + 0x15DED30))(0);
	}
	template <typename T = void*> static T get_AlvesWavesBadgesT2() {
		return ((T (*)(void *))(Il2CppBase() + 0x15DEECC))(0);
	}
	template <typename T = void*> static T get_AlvesWavesBadgesT3() {
		return ((T (*)(void *))(Il2CppBase() + 0x15DF068))(0);
	}
	template <typename T = void*> static T get_Blueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x15DF204))(0);
	}
	template <typename T = void*> static T get_CanBlocked() {
		return ((T (*)(void *))(Il2CppBase() + 0x15DF3A0))(0);
	}
	template <typename T = void*> static T get_CanLifeSteal() {
		return ((T (*)(void *))(Il2CppBase() + 0x15DF53C))(0);
	}
	template <typename T = void*> static T get_CanReflect() {
		return ((T (*)(void *))(Il2CppBase() + 0x15DF6D8))(0);
	}
	template <typename T = void*> static T get_CashbackCoins() {
		return ((T (*)(void *))(Il2CppBase() + 0x15DF874))(0);
	}
	template <typename T = void*> static T get_Coins() {
		return ((T (*)(void *))(Il2CppBase() + 0x15DFA10))(0);
	}
	template <typename T = void*> static T get_ConfigType() {
		return ((T (*)(void *))(Il2CppBase() + 0x15DFBAC))(0);
	}
	template <typename T = void*> static T get_CyclicPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x15DFD48))(0);
	}
	template <typename T = void*> static T get_CyclicPremiumTokens() {
		return ((T (*)(void *))(Il2CppBase() + 0x15DFEE4))(0);
	}
	template <typename T = void*> static T get_CyclicYmirSoul() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E0080))(0);
	}
	template <typename T = void*> static T get_Description() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E021C))(0);
	}
	template <typename T = void*> static T get_DescriptionStats() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E03B8))(0);
	}
	template <typename T = void*> static T get_EventBpPointsA() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E0554))(0);
	}
	template <typename T = void*> static T get_EventBpPointsB() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E06F0))(0);
	}
	template <typename T = void*> static T get_EventBpPointsC() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E088C))(0);
	}
	template <typename T = void*> static T get_ExtraLevelCap() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E0A28))(0);
	}
	template <typename T = void*> static T get_FormatString() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E0BC4))(0);
	}
	template <typename T = void*> static T get_GiantReputation() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E0D60))(0);
	}
	template <typename T = void*> static T get_Grade() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E0EFC))(0);
	}
	template <typename T = void*> static T get_GroupName() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E1098))(0);
	}
	template <typename T = void*> static T get_GuildBossCoins() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E1234))(0);
	}
	template <typename T = void*> static T get_GuildCoins() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E13D0))(0);
	}
	template <typename T = void*> static T get_Influence() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E156C))(0);
	}
	template <typename T = void*> static T get_Interrupt() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E1708))(0);
	}
	template <typename T = void*> static T get_OldBlueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E18A4))(0);
	}
	template <typename T = void*> static T get_Order() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E1A40))(0);
	}
	template <typename T = void*> static T get_Oscillation() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E1BDC))(0);
	}
	template <typename T = void*> static T get_PlayerStatType() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E1D78))(0);
	}
	template <typename T = void*> static T get_PortalsPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E1F18))(0);
	}
	template <typename T = void*> static T get_RaiseSelfHitTrigger() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E20B8))(0);
	}
	template <typename T = void*> static T get_RaiseTargetHitTrigger() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E2258))(0);
	}
	template <typename T = void*> static T get_Resources() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E23F8))(0);
	}
	template <typename T = void*> static T get_SaviorPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E2598))(0);
	}
	template <typename T = void*> static T get_SeasonPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E2738))(0);
	}
	template <typename T = void*> static T get_Silver() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E28D8))(0);
	}
	template <typename T = void*> static T get_TargetArmorCoef() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E2A78))(0);
	}
	template <typename T = void*> static T get_TargetMitigationCoef() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E2C18))(0);
	}
	template <typename T = void*> static T get_Tickets() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E2DB8))(0);
	}
	template <typename T = void*> static T get_UseActorBonusVsTarget() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E2F58))(0);
	}
	template <typename T = void*> static T get_VIPPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x15E30F8))(0);
	}
	template <typename T = void*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15E3298))(0, indices);
	}
	template <typename T = void*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15E3310))(0, matchers);
	}
	template <typename T = void*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15E3388))(0, indices);
	}
	template <typename T = void*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15E3400))(0, matchers);
	}

};

}
