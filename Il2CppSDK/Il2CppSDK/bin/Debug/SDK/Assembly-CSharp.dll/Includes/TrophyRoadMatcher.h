#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TrophyRoadMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrophyRoadMatcher"));
	}

	 static IMatcher1<TrophyRoadEntity*>*& _matcherAddBankSlotCashed() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherAddBankSlot() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherAddClassRuneSlotCached() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherAddClassRuneSlot() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherAddDailyTavernCashed() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherAddDailyTavern() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherAddDefenceCashed() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherAddDefence() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherAddOdinAltarCashed() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherAddOdinAltar() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherAddRoadCashed() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherAddRoad() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherAddScoutCashed() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherAddScout() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherAddStatueCashed() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherAddStatue() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherAddTradeSlotCashed() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherAddTradeSlot() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherBlueprint() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherBuildQuest() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherCitizenCached() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherCitizen() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherClearSiteCashed() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherClearSite() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherCoins() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherCompleteNotify() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherDescription() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherElderDialogue() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherFinalizeQuest() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherGradeCached() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherGuildCoins() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherIcon() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherInfluence() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherLandscapeCashed() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherLandscape() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherLimitCached() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherLimit() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherMasteryPointsBonusCached() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherMasteryPointsBonus() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherMilestone() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherNextMilestone() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherOpenCityCashed() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherOpenCity() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherParameters() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherRecipesCached() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherRecipes() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherRepairBenchCashed() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherRepairBench() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherRequired() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherResources() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherShamanChanceCached() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherShamanChance() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherSilver() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherTargetTags() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherTaxCached() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherTax() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherTier() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	 static IMatcher1<TrophyRoadEntity*>*& _matcherUniqueLookup() {
		return *(IMatcher1<TrophyRoadEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}

	 static IMatcher1<TrophyRoadEntity*>* get_AddBankSlotCashed() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x10230F8))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_AddBankSlot() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1023278))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_AddClassRuneSlotCached() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1023414))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_AddClassRuneSlot() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x10235B0))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_AddDailyTavernCashed() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x102374C))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_AddDailyTavern() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x10238E8))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_AddDefenceCashed() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1023A84))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_AddDefence() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1023C20))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_AddOdinAltarCashed() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1023DBC))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_AddOdinAltar() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1023F58))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_AddRoadCashed() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x10240F4))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_AddRoad() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1024290))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_AddScoutCashed() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x102442C))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_AddScout() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x10245C8))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_AddStatueCashed() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1024764))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_AddStatue() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1024900))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_AddTradeSlotCashed() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1024A9C))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_AddTradeSlot() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1024C38))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_Blueprint() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1024DD4))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_BuildQuest() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1024F70))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_CitizenCached() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x102510C))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_Citizen() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x10252A8))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_ClearSiteCashed() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1025444))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_ClearSite() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x10255E0))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_Coins() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x102577C))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_CompleteNotify() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1025918))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_Description() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1025AB4))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_ElderDialogue() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1025C50))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_FinalizeQuest() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1025DEC))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_GradeCached() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1025F88))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_GuildCoins() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1026124))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_Icon() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x10262C0))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_Influence() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x102645C))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_LandscapeCashed() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x10265FC))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_Landscape() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x102679C))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_LimitCached() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x102693C))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_Limit() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1026ADC))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_MasteryPointsBonusCached() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1026C7C))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_MasteryPointsBonus() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1026E1C))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_Milestone() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1026FBC))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_NextMilestone() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x102715C))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_OldBlueprint() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x10272FC))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_OpenCityCashed() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x102749C))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_OpenCity() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x102763C))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_Parameters() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x10277DC))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_RecipesCached() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x102797C))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_Recipes() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1016194))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_RepairBenchCashed() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1027B1C))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_RepairBench() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1027CBC))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_Required() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1015FF4))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_Resources() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1027E5C))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_ShamanChanceCached() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1027FFC))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_ShamanChance() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x102819C))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_Silver() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x102833C))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_TargetTags() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x10284DC))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_TaxCached() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x102867C))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_Tax() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x102881C))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_Tier() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x10289BC))(0);
	}
	 static IMatcher1<TrophyRoadEntity*>* get_UniqueLookup() {
		return ((IMatcher1<TrophyRoadEntity*>* (*)(void *))(Il2CppBase() + 0x1016334))(0);
	}
	 static IAllOfMatcher1<TrophyRoadEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<TrophyRoadEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1028B5C))(0, indices);
	}
	 static IAllOfMatcher1<TrophyRoadEntity*>* AllOf_1(Il2CppArray<IMatcher1<TrophyRoadEntity*>*>* matchers) {
		return ((IAllOfMatcher1<TrophyRoadEntity*>* (*)(void *, Il2CppArray<IMatcher1<TrophyRoadEntity*>*>*))(Il2CppBase() + 0x1028BD4))(0, matchers);
	}
	 static IAnyOfMatcher1<TrophyRoadEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<TrophyRoadEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1028C4C))(0, indices);
	}
	 static IAnyOfMatcher1<TrophyRoadEntity*>* AnyOf_1(Il2CppArray<IMatcher1<TrophyRoadEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<TrophyRoadEntity*>* (*)(void *, Il2CppArray<IMatcher1<TrophyRoadEntity*>*>*))(Il2CppBase() + 0x1028CC4))(0, matchers);
	}

};

