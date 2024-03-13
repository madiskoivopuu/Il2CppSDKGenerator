#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TrophyRoadEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrophyRoadEntity"));
	}

	template <typename T = AddDefenceCashedComponent*> static T& addDefenceCashedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = AddDefenceComponent*> static T& addDefenceComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = AddOdinAltarCashedComponent*> static T& addOdinAltarCashedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = AddOdinAltarComponent*> static T& addOdinAltarComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = AddRoadCashedComponent*> static T& addRoadCashedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = AddRoadComponent*> static T& addRoadComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = AddScoutCashedComponent*> static T& addScoutCashedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = AddScoutComponent*> static T& addScoutComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = AddStatueCashedComponent*> static T& addStatueCashedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = AddStatueComponent*> static T& addStatueComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = ClearSiteCashedComponent*> static T& clearSiteCashedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = ClearSiteComponent*> static T& clearSiteComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = LandscapeCashedComponent*> static T& landscapeCashedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = LandscapeComponent*> static T& landscapeComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = MilestoneComponent*> static T& milestoneComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = OpenCityCashedComponent*> static T& openCityCashedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = OpenCityComponent*> static T& openCityComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = RepairBenchCashedComponent*> static T& repairBenchCashedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = RepairBenchComponent*> static T& repairBenchComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}

	template <typename T = AddBankSlotCashedComponent*> T get_addBankSlotCashed() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018F00))(this);
	}
	template <typename T = bool> T get_hasAddBankSlotCashed() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1019E54))(this);
	}
	template <typename T = void> T AddAddBankSlotCashed(int32_t newValue) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101901C))(this, newValue);
	}
	template <typename T = void> T ReplaceAddBankSlotCashed(int32_t newValue) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x1019E60))(this, newValue);
	}
	template <typename T = void> T RemoveAddBankSlotCashed() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1019F64))(this);
	}
	template <typename T = AddBankSlotComponent*> T get_addBankSlot() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018F94))(this);
	}
	template <typename T = bool> T get_hasAddBankSlot() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018F88))(this);
	}
	template <typename T = void> T AddAddBankSlot(int32_t newValue) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x1019F70))(this, newValue);
	}
	template <typename T = void> T ReplaceAddBankSlot(int32_t newValue) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101A074))(this, newValue);
	}
	template <typename T = void> T RemoveAddBankSlot() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101A178))(this);
	}
	template <typename T = AddClassRuneSlotCachedComponent*> T get_addClassRuneSlotCached() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1019B90))(this);
	}
	template <typename T = bool> T get_hasAddClassRuneSlotCached() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101A184))(this);
	}
	template <typename T = void> T AddAddClassRuneSlotCached(int32_t newValue) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x1019CAC))(this, newValue);
	}
	template <typename T = void> T ReplaceAddClassRuneSlotCached(int32_t newValue) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101A190))(this, newValue);
	}
	template <typename T = void> T RemoveAddClassRuneSlotCached() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101A294))(this);
	}
	template <typename T = AddClassRuneSlotComponent*> T get_addClassRuneSlot() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1019C24))(this);
	}
	template <typename T = bool> T get_hasAddClassRuneSlot() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1019C18))(this);
	}
	template <typename T = void> T AddAddClassRuneSlot(int32_t newValue) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101A2A0))(this, newValue);
	}
	template <typename T = void> T ReplaceAddClassRuneSlot(int32_t newValue) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101A3A4))(this, newValue);
	}
	template <typename T = void> T RemoveAddClassRuneSlot() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101A4A8))(this);
	}
	template <typename T = AddDailyTavernCashedComponent*> T get_addDailyTavernCashed() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1019120))(this);
	}
	template <typename T = bool> T get_hasAddDailyTavernCashed() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101A4B4))(this);
	}
	template <typename T = void> T AddAddDailyTavernCashed(int32_t newValue) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101923C))(this, newValue);
	}
	template <typename T = void> T ReplaceAddDailyTavernCashed(int32_t newValue) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101A4C0))(this, newValue);
	}
	template <typename T = void> T RemoveAddDailyTavernCashed() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101A5C4))(this);
	}
	template <typename T = AddDailyTavernComponent*> T get_addDailyTavern() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x10191B4))(this);
	}
	template <typename T = bool> T get_hasAddDailyTavern() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x10191A8))(this);
	}
	template <typename T = void> T AddAddDailyTavern(int32_t newValue) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101A5D0))(this, newValue);
	}
	template <typename T = void> T ReplaceAddDailyTavern(int32_t newValue) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101A6D4))(this, newValue);
	}
	template <typename T = void> T RemoveAddDailyTavern() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101A7D8))(this);
	}
	template <typename T = bool> T get_isAddDefenceCashed() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101980C))(this);
	}
	template <typename T = void> T set_isAddDefenceCashed(bool value) {
		return ((T (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x1019818))(this, value);
	}
	template <typename T = bool> T get_isAddDefence() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1019800))(this);
	}
	template <typename T = void> T set_isAddDefence(bool value) {
		return ((T (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x101A7E4))(this, value);
	}
	template <typename T = bool> T get_isAddOdinAltarCashed() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101934C))(this);
	}
	template <typename T = void> T set_isAddOdinAltarCashed(bool value) {
		return ((T (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x1019358))(this, value);
	}
	template <typename T = bool> T get_isAddOdinAltar() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1019340))(this);
	}
	template <typename T = void> T set_isAddOdinAltar(bool value) {
		return ((T (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x101A8FC))(this, value);
	}
	template <typename T = bool> T get_isAddRoadCashed() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1019A6C))(this);
	}
	template <typename T = void> T set_isAddRoadCashed(bool value) {
		return ((T (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x1019A78))(this, value);
	}
	template <typename T = bool> T get_isAddRoad() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1019A60))(this);
	}
	template <typename T = void> T set_isAddRoad(bool value) {
		return ((T (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x101AA14))(this, value);
	}
	template <typename T = bool> T get_isAddScoutCashed() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101AB2C))(this);
	}
	template <typename T = void> T set_isAddScoutCashed(bool value) {
		return ((T (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x101AB38))(this, value);
	}
	template <typename T = bool> T get_isAddScout() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101AC50))(this);
	}
	template <typename T = void> T set_isAddScout(bool value) {
		return ((T (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x101AC5C))(this, value);
	}
	template <typename T = bool> T get_isAddStatueCashed() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101AD74))(this);
	}
	template <typename T = void> T set_isAddStatueCashed(bool value) {
		return ((T (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x101AD80))(this, value);
	}
	template <typename T = bool> T get_isAddStatue() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101AE98))(this);
	}
	template <typename T = void> T set_isAddStatue(bool value) {
		return ((T (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x101AEA4))(this, value);
	}
	template <typename T = AddTradeSlotCashedComponent*> T get_addTradeSlotCashed() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018CE0))(this);
	}
	template <typename T = bool> T get_hasAddTradeSlotCashed() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101AFBC))(this);
	}
	template <typename T = void> T AddAddTradeSlotCashed(int32_t newValue) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x1018DFC))(this, newValue);
	}
	template <typename T = void> T ReplaceAddTradeSlotCashed(int32_t newValue) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101AFC8))(this, newValue);
	}
	template <typename T = void> T RemoveAddTradeSlotCashed() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101B0CC))(this);
	}
	template <typename T = AddTradeSlotComponent*> T get_addTradeSlot() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018D74))(this);
	}
	template <typename T = bool> T get_hasAddTradeSlot() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018D68))(this);
	}
	template <typename T = void> T AddAddTradeSlot(int32_t newValue) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101B0D8))(this, newValue);
	}
	template <typename T = void> T ReplaceAddTradeSlot(int32_t newValue) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101B1DC))(this, newValue);
	}
	template <typename T = void> T RemoveAddTradeSlot() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101B2E0))(this);
	}
	template <typename T = BlueprintComponent*> T get_blueprint() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101B2EC))(this);
	}
	template <typename T = bool> T get_hasBlueprint() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101B374))(this);
	}
	template <typename T = void> T AddBlueprint(Il2CppString* newName) {
		return ((T (*)(TrophyRoadEntity*, Il2CppString*))(Il2CppBase() + 0x101B380))(this, newName);
	}
	template <typename T = void> T ReplaceBlueprint(Il2CppString* newName) {
		return ((T (*)(TrophyRoadEntity*, Il2CppString*))(Il2CppBase() + 0x101B494))(this, newName);
	}
	template <typename T = void> T RemoveBlueprint() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101B5A8))(this);
	}
	template <typename T = BuildQuestComponent*> T get_buildQuest() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x10166F8))(this);
	}
	template <typename T = bool> T get_hasBuildQuest() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x10166EC))(this);
	}
	template <typename T = void> T AddBuildQuest(Il2CppString* newTemplate, Il2CppString* newName) {
		return ((T (*)(TrophyRoadEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x101B5B4))(this, newTemplate, newName);
	}
	template <typename T = void> T ReplaceBuildQuest(Il2CppString* newTemplate, Il2CppString* newName) {
		return ((T (*)(TrophyRoadEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x101B6DC))(this, newTemplate, newName);
	}
	template <typename T = void> T RemoveBuildQuest() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101B804))(this);
	}
	template <typename T = CitizenCachedComponent*> T get_citizenCached() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x10183C4))(this);
	}
	template <typename T = bool> T get_hasCitizenCached() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101B810))(this);
	}
	template <typename T = void> T AddCitizenCached(int32_t newCount) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x10184E0))(this, newCount);
	}
	template <typename T = void> T ReplaceCitizenCached(int32_t newCount) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101B81C))(this, newCount);
	}
	template <typename T = void> T RemoveCitizenCached() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101B920))(this);
	}
	template <typename T = CitizenComponent*> T get_citizen() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018458))(this);
	}
	template <typename T = bool> T get_hasCitizen() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101844C))(this);
	}
	template <typename T = void> T AddCitizen(int32_t newCount) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101B92C))(this, newCount);
	}
	template <typename T = void> T ReplaceCitizen(int32_t newCount) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101BA30))(this, newCount);
	}
	template <typename T = void> T RemoveCitizen() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101BB34))(this);
	}
	template <typename T = bool> T get_isClearSiteCashed() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x10196DC))(this);
	}
	template <typename T = void> T set_isClearSiteCashed(bool value) {
		return ((T (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x10196E8))(this, value);
	}
	template <typename T = bool> T get_isClearSite() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x10196D0))(this);
	}
	template <typename T = void> T set_isClearSite(bool value) {
		return ((T (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x101BB40))(this, value);
	}
	template <typename T = CoinsComponent*> T get_coins() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101BC58))(this);
	}
	template <typename T = bool> T get_hasCoins() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101BCE0))(this);
	}
	template <typename T = void> T AddCoins(int32_t newCount) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101BCEC))(this, newCount);
	}
	template <typename T = void> T ReplaceCoins(int32_t newCount) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101BDF0))(this, newCount);
	}
	template <typename T = void> T RemoveCoins() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101BEF4))(this);
	}
	template <typename T = CompleteNotifyComponent*> T get_completeNotify() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101BF00))(this);
	}
	template <typename T = bool> T get_hasCompleteNotify() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101BF88))(this);
	}
	template <typename T = void> T AddCompleteNotify(NotifyType* newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((T (*)(TrophyRoadEntity*, NotifyType*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x101BF94))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename T = void> T ReplaceCompleteNotify(NotifyType* newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((T (*)(TrophyRoadEntity*, NotifyType*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x101C0FC))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename T = void> T RemoveCompleteNotify() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101C264))(this);
	}
	template <typename T = DescriptionComponent*> T get_description() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1017E58))(this);
	}
	template <typename T = bool> T get_hasDescription() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1017E4C))(this);
	}
	template <typename T = void> T AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(TrophyRoadEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x101C270))(this, newCaption, newText);
	}
	template <typename T = void> T ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(TrophyRoadEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x101C398))(this, newCaption, newText);
	}
	template <typename T = void> T RemoveDescription() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101C4C0))(this);
	}
	template <typename T = ElderDialogueComponent*> T get_elderDialogue() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101C4CC))(this);
	}
	template <typename T = bool> T get_hasElderDialogue() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101C554))(this);
	}
	template <typename T = void> T AddElderDialogue(Il2CppString* newValue) {
		return ((T (*)(TrophyRoadEntity*, Il2CppString*))(Il2CppBase() + 0x101C560))(this, newValue);
	}
	template <typename T = void> T ReplaceElderDialogue(Il2CppString* newValue) {
		return ((T (*)(TrophyRoadEntity*, Il2CppString*))(Il2CppBase() + 0x101C674))(this, newValue);
	}
	template <typename T = void> T RemoveElderDialogue() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101C788))(this);
	}
	template <typename T = FinalizeQuestComponent*> T get_finalizeQuest() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1016664))(this);
	}
	template <typename T = bool> T get_hasFinalizeQuest() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1016658))(this);
	}
	template <typename T = void> T AddFinalizeQuest(Il2CppString* newTemplate, Il2CppString* newName) {
		return ((T (*)(TrophyRoadEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x101C794))(this, newTemplate, newName);
	}
	template <typename T = void> T ReplaceFinalizeQuest(Il2CppString* newTemplate, Il2CppString* newName) {
		return ((T (*)(TrophyRoadEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x101C8BC))(this, newTemplate, newName);
	}
	template <typename T = void> T RemoveFinalizeQuest() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101C9E4))(this);
	}
	template <typename T = GradeCachedComponent*> T get_gradeCached() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101C9F0))(this);
	}
	template <typename T = bool> T get_hasGradeCached() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101CA78))(this);
	}
	template <typename T = void> T AddGradeCached(Il2CppDictionary<Il2CppString*, int32_t>* newList) {
		return ((T (*)(TrophyRoadEntity*, Il2CppDictionary<Il2CppString*, int32_t>*))(Il2CppBase() + 0x1018804))(this, newList);
	}
	template <typename T = void> T ReplaceGradeCached(Il2CppDictionary<Il2CppString*, int32_t>* newList) {
		return ((T (*)(TrophyRoadEntity*, Il2CppDictionary<Il2CppString*, int32_t>*))(Il2CppBase() + 0x101CA84))(this, newList);
	}
	template <typename T = void> T RemoveGradeCached() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101CB98))(this);
	}
	template <typename T = GuildCoinsComponent*> T get_guildCoins() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101CBA4))(this);
	}
	template <typename T = bool> T get_hasGuildCoins() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101CC2C))(this);
	}
	template <typename T = void> T AddGuildCoins(int32_t newCount) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101CC38))(this, newCount);
	}
	template <typename T = void> T ReplaceGuildCoins(int32_t newCount) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101CD3C))(this, newCount);
	}
	template <typename T = void> T RemoveGuildCoins() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101CE40))(this);
	}
	template <typename T = IconComponent*> T get_icon() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101CE4C))(this);
	}
	template <typename T = bool> T get_hasIcon() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101CED4))(this);
	}
	template <typename T = void> T AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(TrophyRoadEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x101CEE0))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(TrophyRoadEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x101D038))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T RemoveIcon() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101D190))(this);
	}
	template <typename T = InfluenceComponent*> T get_influence() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101D19C))(this);
	}
	template <typename T = bool> T get_hasInfluence() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101D224))(this);
	}
	template <typename T = void> T AddInfluence(int32_t newCount) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101D230))(this, newCount);
	}
	template <typename T = void> T ReplaceInfluence(int32_t newCount) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101D334))(this, newCount);
	}
	template <typename T = void> T RemoveInfluence() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101D438))(this);
	}
	template <typename T = bool> T get_isLandscapeCashed() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101993C))(this);
	}
	template <typename T = void> T set_isLandscapeCashed(bool value) {
		return ((T (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x1019948))(this, value);
	}
	template <typename T = bool> T get_isLandscape() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1019930))(this);
	}
	template <typename T = void> T set_isLandscape(bool value) {
		return ((T (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x101D444))(this, value);
	}
	template <typename T = LimitCachedComponent*> T get_limitCached() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1017F74))(this);
	}
	template <typename T = bool> T get_hasLimitCached() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101D55C))(this);
	}
	template <typename T = void> T AddLimitCached(Il2CppDictionary<Il2CppString*, int32_t>* newList) {
		return ((T (*)(TrophyRoadEntity*, Il2CppDictionary<Il2CppString*, int32_t>*))(Il2CppBase() + 0x1018090))(this, newList);
	}
	template <typename T = void> T ReplaceLimitCached(Il2CppDictionary<Il2CppString*, int32_t>* newList) {
		return ((T (*)(TrophyRoadEntity*, Il2CppDictionary<Il2CppString*, int32_t>*))(Il2CppBase() + 0x101D568))(this, newList);
	}
	template <typename T = void> T RemoveLimitCached() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101D67C))(this);
	}
	template <typename T = LimitComponent*> T get_limit() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018008))(this);
	}
	template <typename T = bool> T get_hasLimit() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1017FFC))(this);
	}
	template <typename T = void> T AddLimit(Il2CppDictionary<Il2CppString*, int32_t>* newList) {
		return ((T (*)(TrophyRoadEntity*, Il2CppDictionary<Il2CppString*, int32_t>*))(Il2CppBase() + 0x101D688))(this, newList);
	}
	template <typename T = void> T ReplaceLimit(Il2CppDictionary<Il2CppString*, int32_t>* newList) {
		return ((T (*)(TrophyRoadEntity*, Il2CppDictionary<Il2CppString*, int32_t>*))(Il2CppBase() + 0x101D79C))(this, newList);
	}
	template <typename T = void> T RemoveLimit() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101D8B0))(this);
	}
	template <typename T = MasteryPointsBonusCachedComponent*> T get_masteryPointsBonusCached() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x10181A4))(this);
	}
	template <typename T = bool> T get_hasMasteryPointsBonusCached() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101D8BC))(this);
	}
	template <typename T = void> T AddMasteryPointsBonusCached(float newValue) {
		return ((T (*)(TrophyRoadEntity*, float))(Il2CppBase() + 0x10182C0))(this, newValue);
	}
	template <typename T = void> T ReplaceMasteryPointsBonusCached(float newValue) {
		return ((T (*)(TrophyRoadEntity*, float))(Il2CppBase() + 0x101D8C8))(this, newValue);
	}
	template <typename T = void> T RemoveMasteryPointsBonusCached() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101D9CC))(this);
	}
	template <typename T = MasteryPointsBonusComponent*> T get_masteryPointsBonus() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018238))(this);
	}
	template <typename T = bool> T get_hasMasteryPointsBonus() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101822C))(this);
	}
	template <typename T = void> T AddMasteryPointsBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(TrophyRoadEntity*, float, ModifierGroup*))(Il2CppBase() + 0x101D9D8))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMasteryPointsBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(TrophyRoadEntity*, float, ModifierGroup*))(Il2CppBase() + 0x101DAEC))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMasteryPointsBonus() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101DC00))(this);
	}
	template <typename T = bool> T get_isMilestone() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1017E40))(this);
	}
	template <typename T = void> T set_isMilestone(bool value) {
		return ((T (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x101DC0C))(this, value);
	}
	template <typename T = NextMilestoneComponent*> T get_nextMilestone() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101DD24))(this);
	}
	template <typename T = bool> T get_hasNextMilestone() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101DDAC))(this);
	}
	template <typename T = void> T AddNextMilestone(int32_t newValue) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x1017D3C))(this, newValue);
	}
	template <typename T = void> T ReplaceNextMilestone(int32_t newValue) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101DDB8))(this, newValue);
	}
	template <typename T = void> T RemoveNextMilestone() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101DEBC))(this);
	}
	template <typename T = OldBlueprintComponent*> T get_oldBlueprint() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101DEC8))(this);
	}
	template <typename T = bool> T get_hasOldBlueprint() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101DF50))(this);
	}
	template <typename T = void> T AddOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(TrophyRoadEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x101DF5C))(this, newNames);
	}
	template <typename T = void> T ReplaceOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(TrophyRoadEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x101E070))(this, newNames);
	}
	template <typename T = void> T RemoveOldBlueprint() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101E184))(this);
	}
	template <typename T = bool> T get_isOpenCityCashed() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101947C))(this);
	}
	template <typename T = void> T set_isOpenCityCashed(bool value) {
		return ((T (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x1019488))(this, value);
	}
	template <typename T = bool> T get_isOpenCity() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1019470))(this);
	}
	template <typename T = void> T set_isOpenCity(bool value) {
		return ((T (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x101E190))(this, value);
	}
	template <typename T = ParametersComponent*> T get_parameters() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101E2A8))(this);
	}
	template <typename T = bool> T get_hasParameters() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101E330))(this);
	}
	template <typename T = void> T AddParameters(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(TrophyRoadEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x101E33C))(this, newNames);
	}
	template <typename T = void> T ReplaceParameters(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(TrophyRoadEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x101E450))(this, newNames);
	}
	template <typename T = void> T RemoveParameters() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101E564))(this);
	}
	template <typename T = RecipesCachedComponent*> T get_recipesCached() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101E570))(this);
	}
	template <typename T = bool> T get_hasRecipesCached() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101E5F8))(this);
	}
	template <typename T = void> T AddRecipesCached(Il2CppList<Il2CppString*>* newList) {
		return ((T (*)(TrophyRoadEntity*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x10189AC))(this, newList);
	}
	template <typename T = void> T ReplaceRecipesCached(Il2CppList<Il2CppString*>* newList) {
		return ((T (*)(TrophyRoadEntity*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x101E604))(this, newList);
	}
	template <typename T = void> T RemoveRecipesCached() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101E718))(this);
	}
	template <typename T = RecipesComponent*> T get_recipes() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018924))(this);
	}
	template <typename T = bool> T get_hasRecipes() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018918))(this);
	}
	template <typename T = void> T AddRecipes(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(TrophyRoadEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x101E724))(this, newValues);
	}
	template <typename T = void> T ReplaceRecipes(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(TrophyRoadEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x101E838))(this, newValues);
	}
	template <typename T = void> T RemoveRecipes() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101E94C))(this);
	}
	template <typename T = bool> T get_isRepairBenchCashed() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x10195AC))(this);
	}
	template <typename T = void> T set_isRepairBenchCashed(bool value) {
		return ((T (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x10195B8))(this, value);
	}
	template <typename T = bool> T get_isRepairBench() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x10195A0))(this);
	}
	template <typename T = void> T set_isRepairBench(bool value) {
		return ((T (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x101E958))(this, value);
	}
	template <typename T = RequiredComponent*> T get_required() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1017C20))(this);
	}
	template <typename T = bool> T get_hasRequired() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101EA70))(this);
	}
	template <typename T = void> T AddRequired(int32_t newLevel) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101EA7C))(this, newLevel);
	}
	template <typename T = void> T ReplaceRequired(int32_t newLevel) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101EB80))(this, newLevel);
	}
	template <typename T = void> T RemoveRequired() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101EC84))(this);
	}
	template <typename T = ResourcesComponent*> T get_resources() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101EC90))(this);
	}
	template <typename T = bool> T get_hasResources() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101ED18))(this);
	}
	template <typename T = void> T AddResources(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(TrophyRoadEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x101ED24))(this, newList);
	}
	template <typename T = void> T ReplaceResources(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(TrophyRoadEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x101EE38))(this, newList);
	}
	template <typename T = void> T RemoveResources() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101EF4C))(this);
	}
	template <typename T = ShamanChanceCachedComponent*> T get_shamanChanceCached() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018AC0))(this);
	}
	template <typename T = bool> T get_hasShamanChanceCached() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101EF58))(this);
	}
	template <typename T = void> T AddShamanChanceCached(float newValue) {
		return ((T (*)(TrophyRoadEntity*, float))(Il2CppBase() + 0x1018BDC))(this, newValue);
	}
	template <typename T = void> T ReplaceShamanChanceCached(float newValue) {
		return ((T (*)(TrophyRoadEntity*, float))(Il2CppBase() + 0x101EF64))(this, newValue);
	}
	template <typename T = void> T RemoveShamanChanceCached() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101F068))(this);
	}
	template <typename T = ShamanChanceComponent*> T get_shamanChance() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018B54))(this);
	}
	template <typename T = bool> T get_hasShamanChance() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018B48))(this);
	}
	template <typename T = void> T AddShamanChance(float newValue) {
		return ((T (*)(TrophyRoadEntity*, float))(Il2CppBase() + 0x101F074))(this, newValue);
	}
	template <typename T = void> T ReplaceShamanChance(float newValue) {
		return ((T (*)(TrophyRoadEntity*, float))(Il2CppBase() + 0x101F178))(this, newValue);
	}
	template <typename T = void> T RemoveShamanChance() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101F27C))(this);
	}
	template <typename T = SilverComponent*> T get_silver() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101F288))(this);
	}
	template <typename T = bool> T get_hasSilver() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101F310))(this);
	}
	template <typename T = void> T AddSilver(int32_t newCount) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101F31C))(this, newCount);
	}
	template <typename T = void> T ReplaceSilver(int32_t newCount) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101F420))(this, newCount);
	}
	template <typename T = void> T RemoveSilver() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101F524))(this);
	}
	template <typename T = TargetTagsComponent*> T get_targetTags() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1017CB4))(this);
	}
	template <typename T = bool> T get_hasTargetTags() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1017CA8))(this);
	}
	template <typename T = void> T AddTargetTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(TrophyRoadEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x101F530))(this, newValues);
	}
	template <typename T = void> T ReplaceTargetTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(TrophyRoadEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x101F644))(this, newValues);
	}
	template <typename T = void> T RemoveTargetTags() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101F758))(this);
	}
	template <typename T = TaxCachedComponent*> T get_taxCached() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x10185E4))(this);
	}
	template <typename T = bool> T get_hasTaxCached() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101F764))(this);
	}
	template <typename T = void> T AddTaxCached(float newValue) {
		return ((T (*)(TrophyRoadEntity*, float))(Il2CppBase() + 0x1018700))(this, newValue);
	}
	template <typename T = void> T ReplaceTaxCached(float newValue) {
		return ((T (*)(TrophyRoadEntity*, float))(Il2CppBase() + 0x101F770))(this, newValue);
	}
	template <typename T = void> T RemoveTaxCached() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101F874))(this);
	}
	template <typename T = TaxComponent*> T get_tax() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018678))(this);
	}
	template <typename T = bool> T get_hasTax() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101866C))(this);
	}
	template <typename T = void> T AddTax(float newValue) {
		return ((T (*)(TrophyRoadEntity*, float))(Il2CppBase() + 0x101F880))(this, newValue);
	}
	template <typename T = void> T ReplaceTax(float newValue) {
		return ((T (*)(TrophyRoadEntity*, float))(Il2CppBase() + 0x101F984))(this, newValue);
	}
	template <typename T = void> T RemoveTax() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101FA88))(this);
	}
	template <typename T = TierComponent*> T get_tier() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1017EEC))(this);
	}
	template <typename T = bool> T get_hasTier() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1017EE0))(this);
	}
	template <typename T = void> T AddTier(int32_t newValue) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101FA94))(this, newValue);
	}
	template <typename T = void> T ReplaceTier(int32_t newValue) {
		return ((T (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101FB98))(this, newValue);
	}
	template <typename T = void> T RemoveTier() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101FC9C))(this);
	}
	template <typename T = UniqueLookupComponent*> T get_uniqueLookup() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101FCA8))(this);
	}
	template <typename T = bool> T get_hasUniqueLookup() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101FD30))(this);
	}
	template <typename T = void> T AddUniqueLookup(Il2CppString* newName) {
		return ((T (*)(TrophyRoadEntity*, Il2CppString*))(Il2CppBase() + 0x101FD3C))(this, newName);
	}
	template <typename T = void> T ReplaceUniqueLookup(Il2CppString* newName) {
		return ((T (*)(TrophyRoadEntity*, Il2CppString*))(Il2CppBase() + 0x101FE50))(this, newName);
	}
	template <typename T = void> T RemoveUniqueLookup() {
		return ((T (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101FF64))(this);
	}

};

