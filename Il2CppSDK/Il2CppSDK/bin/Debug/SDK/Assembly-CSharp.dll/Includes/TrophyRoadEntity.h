#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TrophyRoadEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrophyRoadEntity"));
	}

	template <typename R = AddDefenceCashedComponent*> static R& addDefenceCashedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = AddDefenceComponent*> static R& addDefenceComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = AddOdinAltarCashedComponent*> static R& addOdinAltarCashedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = AddOdinAltarComponent*> static R& addOdinAltarComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = AddRoadCashedComponent*> static R& addRoadCashedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename R = AddRoadComponent*> static R& addRoadComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename R = AddScoutCashedComponent*> static R& addScoutCashedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename R = AddScoutComponent*> static R& addScoutComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename R = AddStatueCashedComponent*> static R& addStatueCashedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename R = AddStatueComponent*> static R& addStatueComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename R = ClearSiteCashedComponent*> static R& clearSiteCashedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename R = ClearSiteComponent*> static R& clearSiteComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename R = LandscapeCashedComponent*> static R& landscapeCashedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename R = LandscapeComponent*> static R& landscapeComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename R = MilestoneComponent*> static R& milestoneComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename R = OpenCityCashedComponent*> static R& openCityCashedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename R = OpenCityComponent*> static R& openCityComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename R = RepairBenchCashedComponent*> static R& repairBenchCashedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename R = RepairBenchComponent*> static R& repairBenchComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}

	template <typename R = AddBankSlotCashedComponent*> R get_addBankSlotCashed() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018F00))(this);
	}
	template <typename R = bool> R get_hasAddBankSlotCashed() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1019E54))(this);
	}
	template <typename R = void> R AddAddBankSlotCashed(int32_t newValue) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101901C))(this, newValue);
	}
	template <typename R = void> R ReplaceAddBankSlotCashed(int32_t newValue) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x1019E60))(this, newValue);
	}
	template <typename R = void> R RemoveAddBankSlotCashed() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1019F64))(this);
	}
	template <typename R = AddBankSlotComponent*> R get_addBankSlot() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018F94))(this);
	}
	template <typename R = bool> R get_hasAddBankSlot() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018F88))(this);
	}
	template <typename R = void> R AddAddBankSlot(int32_t newValue) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x1019F70))(this, newValue);
	}
	template <typename R = void> R ReplaceAddBankSlot(int32_t newValue) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101A074))(this, newValue);
	}
	template <typename R = void> R RemoveAddBankSlot() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101A178))(this);
	}
	template <typename R = AddClassRuneSlotCachedComponent*> R get_addClassRuneSlotCached() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1019B90))(this);
	}
	template <typename R = bool> R get_hasAddClassRuneSlotCached() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101A184))(this);
	}
	template <typename R = void> R AddAddClassRuneSlotCached(int32_t newValue) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x1019CAC))(this, newValue);
	}
	template <typename R = void> R ReplaceAddClassRuneSlotCached(int32_t newValue) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101A190))(this, newValue);
	}
	template <typename R = void> R RemoveAddClassRuneSlotCached() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101A294))(this);
	}
	template <typename R = AddClassRuneSlotComponent*> R get_addClassRuneSlot() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1019C24))(this);
	}
	template <typename R = bool> R get_hasAddClassRuneSlot() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1019C18))(this);
	}
	template <typename R = void> R AddAddClassRuneSlot(int32_t newValue) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101A2A0))(this, newValue);
	}
	template <typename R = void> R ReplaceAddClassRuneSlot(int32_t newValue) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101A3A4))(this, newValue);
	}
	template <typename R = void> R RemoveAddClassRuneSlot() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101A4A8))(this);
	}
	template <typename R = AddDailyTavernCashedComponent*> R get_addDailyTavernCashed() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1019120))(this);
	}
	template <typename R = bool> R get_hasAddDailyTavernCashed() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101A4B4))(this);
	}
	template <typename R = void> R AddAddDailyTavernCashed(int32_t newValue) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101923C))(this, newValue);
	}
	template <typename R = void> R ReplaceAddDailyTavernCashed(int32_t newValue) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101A4C0))(this, newValue);
	}
	template <typename R = void> R RemoveAddDailyTavernCashed() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101A5C4))(this);
	}
	template <typename R = AddDailyTavernComponent*> R get_addDailyTavern() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x10191B4))(this);
	}
	template <typename R = bool> R get_hasAddDailyTavern() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x10191A8))(this);
	}
	template <typename R = void> R AddAddDailyTavern(int32_t newValue) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101A5D0))(this, newValue);
	}
	template <typename R = void> R ReplaceAddDailyTavern(int32_t newValue) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101A6D4))(this, newValue);
	}
	template <typename R = void> R RemoveAddDailyTavern() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101A7D8))(this);
	}
	template <typename R = bool> R get_isAddDefenceCashed() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101980C))(this);
	}
	template <typename R = void> R set_isAddDefenceCashed(bool value) {
		return ((R (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x1019818))(this, value);
	}
	template <typename R = bool> R get_isAddDefence() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1019800))(this);
	}
	template <typename R = void> R set_isAddDefence(bool value) {
		return ((R (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x101A7E4))(this, value);
	}
	template <typename R = bool> R get_isAddOdinAltarCashed() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101934C))(this);
	}
	template <typename R = void> R set_isAddOdinAltarCashed(bool value) {
		return ((R (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x1019358))(this, value);
	}
	template <typename R = bool> R get_isAddOdinAltar() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1019340))(this);
	}
	template <typename R = void> R set_isAddOdinAltar(bool value) {
		return ((R (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x101A8FC))(this, value);
	}
	template <typename R = bool> R get_isAddRoadCashed() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1019A6C))(this);
	}
	template <typename R = void> R set_isAddRoadCashed(bool value) {
		return ((R (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x1019A78))(this, value);
	}
	template <typename R = bool> R get_isAddRoad() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1019A60))(this);
	}
	template <typename R = void> R set_isAddRoad(bool value) {
		return ((R (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x101AA14))(this, value);
	}
	template <typename R = bool> R get_isAddScoutCashed() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101AB2C))(this);
	}
	template <typename R = void> R set_isAddScoutCashed(bool value) {
		return ((R (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x101AB38))(this, value);
	}
	template <typename R = bool> R get_isAddScout() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101AC50))(this);
	}
	template <typename R = void> R set_isAddScout(bool value) {
		return ((R (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x101AC5C))(this, value);
	}
	template <typename R = bool> R get_isAddStatueCashed() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101AD74))(this);
	}
	template <typename R = void> R set_isAddStatueCashed(bool value) {
		return ((R (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x101AD80))(this, value);
	}
	template <typename R = bool> R get_isAddStatue() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101AE98))(this);
	}
	template <typename R = void> R set_isAddStatue(bool value) {
		return ((R (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x101AEA4))(this, value);
	}
	template <typename R = AddTradeSlotCashedComponent*> R get_addTradeSlotCashed() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018CE0))(this);
	}
	template <typename R = bool> R get_hasAddTradeSlotCashed() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101AFBC))(this);
	}
	template <typename R = void> R AddAddTradeSlotCashed(int32_t newValue) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x1018DFC))(this, newValue);
	}
	template <typename R = void> R ReplaceAddTradeSlotCashed(int32_t newValue) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101AFC8))(this, newValue);
	}
	template <typename R = void> R RemoveAddTradeSlotCashed() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101B0CC))(this);
	}
	template <typename R = AddTradeSlotComponent*> R get_addTradeSlot() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018D74))(this);
	}
	template <typename R = bool> R get_hasAddTradeSlot() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018D68))(this);
	}
	template <typename R = void> R AddAddTradeSlot(int32_t newValue) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101B0D8))(this, newValue);
	}
	template <typename R = void> R ReplaceAddTradeSlot(int32_t newValue) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101B1DC))(this, newValue);
	}
	template <typename R = void> R RemoveAddTradeSlot() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101B2E0))(this);
	}
	template <typename R = BlueprintComponent*> R get_blueprint() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101B2EC))(this);
	}
	template <typename R = bool> R get_hasBlueprint() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101B374))(this);
	}
	template <typename R = void> R AddBlueprint(Il2CppString* newName) {
		return ((R (*)(TrophyRoadEntity*, Il2CppString*))(Il2CppBase() + 0x101B380))(this, newName);
	}
	template <typename R = void> R ReplaceBlueprint(Il2CppString* newName) {
		return ((R (*)(TrophyRoadEntity*, Il2CppString*))(Il2CppBase() + 0x101B494))(this, newName);
	}
	template <typename R = void> R RemoveBlueprint() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101B5A8))(this);
	}
	template <typename R = BuildQuestComponent*> R get_buildQuest() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x10166F8))(this);
	}
	template <typename R = bool> R get_hasBuildQuest() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x10166EC))(this);
	}
	template <typename R = void> R AddBuildQuest(Il2CppString* newTemplate, Il2CppString* newName) {
		return ((R (*)(TrophyRoadEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x101B5B4))(this, newTemplate, newName);
	}
	template <typename R = void> R ReplaceBuildQuest(Il2CppString* newTemplate, Il2CppString* newName) {
		return ((R (*)(TrophyRoadEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x101B6DC))(this, newTemplate, newName);
	}
	template <typename R = void> R RemoveBuildQuest() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101B804))(this);
	}
	template <typename R = CitizenCachedComponent*> R get_citizenCached() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x10183C4))(this);
	}
	template <typename R = bool> R get_hasCitizenCached() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101B810))(this);
	}
	template <typename R = void> R AddCitizenCached(int32_t newCount) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x10184E0))(this, newCount);
	}
	template <typename R = void> R ReplaceCitizenCached(int32_t newCount) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101B81C))(this, newCount);
	}
	template <typename R = void> R RemoveCitizenCached() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101B920))(this);
	}
	template <typename R = CitizenComponent*> R get_citizen() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018458))(this);
	}
	template <typename R = bool> R get_hasCitizen() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101844C))(this);
	}
	template <typename R = void> R AddCitizen(int32_t newCount) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101B92C))(this, newCount);
	}
	template <typename R = void> R ReplaceCitizen(int32_t newCount) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101BA30))(this, newCount);
	}
	template <typename R = void> R RemoveCitizen() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101BB34))(this);
	}
	template <typename R = bool> R get_isClearSiteCashed() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x10196DC))(this);
	}
	template <typename R = void> R set_isClearSiteCashed(bool value) {
		return ((R (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x10196E8))(this, value);
	}
	template <typename R = bool> R get_isClearSite() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x10196D0))(this);
	}
	template <typename R = void> R set_isClearSite(bool value) {
		return ((R (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x101BB40))(this, value);
	}
	template <typename R = CoinsComponent*> R get_coins() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101BC58))(this);
	}
	template <typename R = bool> R get_hasCoins() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101BCE0))(this);
	}
	template <typename R = void> R AddCoins(int32_t newCount) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101BCEC))(this, newCount);
	}
	template <typename R = void> R ReplaceCoins(int32_t newCount) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101BDF0))(this, newCount);
	}
	template <typename R = void> R RemoveCoins() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101BEF4))(this);
	}
	template <typename R = CompleteNotifyComponent*> R get_completeNotify() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101BF00))(this);
	}
	template <typename R = bool> R get_hasCompleteNotify() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101BF88))(this);
	}
	template <typename R = void> R AddCompleteNotify(NotifyType newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((R (*)(TrophyRoadEntity*, NotifyType, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x101BF94))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename R = void> R ReplaceCompleteNotify(NotifyType newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((R (*)(TrophyRoadEntity*, NotifyType, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x101C0FC))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename R = void> R RemoveCompleteNotify() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101C264))(this);
	}
	template <typename R = DescriptionComponent*> R get_description() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1017E58))(this);
	}
	template <typename R = bool> R get_hasDescription() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1017E4C))(this);
	}
	template <typename R = void> R AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(TrophyRoadEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x101C270))(this, newCaption, newText);
	}
	template <typename R = void> R ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(TrophyRoadEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x101C398))(this, newCaption, newText);
	}
	template <typename R = void> R RemoveDescription() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101C4C0))(this);
	}
	template <typename R = ElderDialogueComponent*> R get_elderDialogue() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101C4CC))(this);
	}
	template <typename R = bool> R get_hasElderDialogue() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101C554))(this);
	}
	template <typename R = void> R AddElderDialogue(Il2CppString* newValue) {
		return ((R (*)(TrophyRoadEntity*, Il2CppString*))(Il2CppBase() + 0x101C560))(this, newValue);
	}
	template <typename R = void> R ReplaceElderDialogue(Il2CppString* newValue) {
		return ((R (*)(TrophyRoadEntity*, Il2CppString*))(Il2CppBase() + 0x101C674))(this, newValue);
	}
	template <typename R = void> R RemoveElderDialogue() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101C788))(this);
	}
	template <typename R = FinalizeQuestComponent*> R get_finalizeQuest() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1016664))(this);
	}
	template <typename R = bool> R get_hasFinalizeQuest() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1016658))(this);
	}
	template <typename R = void> R AddFinalizeQuest(Il2CppString* newTemplate, Il2CppString* newName) {
		return ((R (*)(TrophyRoadEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x101C794))(this, newTemplate, newName);
	}
	template <typename R = void> R ReplaceFinalizeQuest(Il2CppString* newTemplate, Il2CppString* newName) {
		return ((R (*)(TrophyRoadEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x101C8BC))(this, newTemplate, newName);
	}
	template <typename R = void> R RemoveFinalizeQuest() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101C9E4))(this);
	}
	template <typename R = GradeCachedComponent*> R get_gradeCached() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101C9F0))(this);
	}
	template <typename R = bool> R get_hasGradeCached() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101CA78))(this);
	}
	template <typename R = void> R AddGradeCached(Il2CppDictionary<Il2CppString*, int32_t>* newList) {
		return ((R (*)(TrophyRoadEntity*, Il2CppDictionary<Il2CppString*, int32_t>*))(Il2CppBase() + 0x1018804))(this, newList);
	}
	template <typename R = void> R ReplaceGradeCached(Il2CppDictionary<Il2CppString*, int32_t>* newList) {
		return ((R (*)(TrophyRoadEntity*, Il2CppDictionary<Il2CppString*, int32_t>*))(Il2CppBase() + 0x101CA84))(this, newList);
	}
	template <typename R = void> R RemoveGradeCached() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101CB98))(this);
	}
	template <typename R = GuildCoinsComponent*> R get_guildCoins() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101CBA4))(this);
	}
	template <typename R = bool> R get_hasGuildCoins() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101CC2C))(this);
	}
	template <typename R = void> R AddGuildCoins(int32_t newCount) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101CC38))(this, newCount);
	}
	template <typename R = void> R ReplaceGuildCoins(int32_t newCount) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101CD3C))(this, newCount);
	}
	template <typename R = void> R RemoveGuildCoins() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101CE40))(this);
	}
	template <typename R = IconComponent*> R get_icon() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101CE4C))(this);
	}
	template <typename R = bool> R get_hasIcon() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101CED4))(this);
	}
	template <typename R = void> R AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(TrophyRoadEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x101CEE0))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(TrophyRoadEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x101D038))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R RemoveIcon() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101D190))(this);
	}
	template <typename R = InfluenceComponent*> R get_influence() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101D19C))(this);
	}
	template <typename R = bool> R get_hasInfluence() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101D224))(this);
	}
	template <typename R = void> R AddInfluence(int32_t newCount) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101D230))(this, newCount);
	}
	template <typename R = void> R ReplaceInfluence(int32_t newCount) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101D334))(this, newCount);
	}
	template <typename R = void> R RemoveInfluence() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101D438))(this);
	}
	template <typename R = bool> R get_isLandscapeCashed() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101993C))(this);
	}
	template <typename R = void> R set_isLandscapeCashed(bool value) {
		return ((R (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x1019948))(this, value);
	}
	template <typename R = bool> R get_isLandscape() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1019930))(this);
	}
	template <typename R = void> R set_isLandscape(bool value) {
		return ((R (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x101D444))(this, value);
	}
	template <typename R = LimitCachedComponent*> R get_limitCached() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1017F74))(this);
	}
	template <typename R = bool> R get_hasLimitCached() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101D55C))(this);
	}
	template <typename R = void> R AddLimitCached(Il2CppDictionary<Il2CppString*, int32_t>* newList) {
		return ((R (*)(TrophyRoadEntity*, Il2CppDictionary<Il2CppString*, int32_t>*))(Il2CppBase() + 0x1018090))(this, newList);
	}
	template <typename R = void> R ReplaceLimitCached(Il2CppDictionary<Il2CppString*, int32_t>* newList) {
		return ((R (*)(TrophyRoadEntity*, Il2CppDictionary<Il2CppString*, int32_t>*))(Il2CppBase() + 0x101D568))(this, newList);
	}
	template <typename R = void> R RemoveLimitCached() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101D67C))(this);
	}
	template <typename R = LimitComponent*> R get_limit() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018008))(this);
	}
	template <typename R = bool> R get_hasLimit() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1017FFC))(this);
	}
	template <typename R = void> R AddLimit(Il2CppDictionary<Il2CppString*, int32_t>* newList) {
		return ((R (*)(TrophyRoadEntity*, Il2CppDictionary<Il2CppString*, int32_t>*))(Il2CppBase() + 0x101D688))(this, newList);
	}
	template <typename R = void> R ReplaceLimit(Il2CppDictionary<Il2CppString*, int32_t>* newList) {
		return ((R (*)(TrophyRoadEntity*, Il2CppDictionary<Il2CppString*, int32_t>*))(Il2CppBase() + 0x101D79C))(this, newList);
	}
	template <typename R = void> R RemoveLimit() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101D8B0))(this);
	}
	template <typename R = MasteryPointsBonusCachedComponent*> R get_masteryPointsBonusCached() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x10181A4))(this);
	}
	template <typename R = bool> R get_hasMasteryPointsBonusCached() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101D8BC))(this);
	}
	template <typename R = void> R AddMasteryPointsBonusCached(float newValue) {
		return ((R (*)(TrophyRoadEntity*, float))(Il2CppBase() + 0x10182C0))(this, newValue);
	}
	template <typename R = void> R ReplaceMasteryPointsBonusCached(float newValue) {
		return ((R (*)(TrophyRoadEntity*, float))(Il2CppBase() + 0x101D8C8))(this, newValue);
	}
	template <typename R = void> R RemoveMasteryPointsBonusCached() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101D9CC))(this);
	}
	template <typename R = MasteryPointsBonusComponent*> R get_masteryPointsBonus() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018238))(this);
	}
	template <typename R = bool> R get_hasMasteryPointsBonus() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101822C))(this);
	}
	template <typename R = void> R AddMasteryPointsBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(TrophyRoadEntity*, float, ModifierGroup))(Il2CppBase() + 0x101D9D8))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMasteryPointsBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(TrophyRoadEntity*, float, ModifierGroup))(Il2CppBase() + 0x101DAEC))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMasteryPointsBonus() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101DC00))(this);
	}
	template <typename R = bool> R get_isMilestone() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1017E40))(this);
	}
	template <typename R = void> R set_isMilestone(bool value) {
		return ((R (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x101DC0C))(this, value);
	}
	template <typename R = NextMilestoneComponent*> R get_nextMilestone() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101DD24))(this);
	}
	template <typename R = bool> R get_hasNextMilestone() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101DDAC))(this);
	}
	template <typename R = void> R AddNextMilestone(int32_t newValue) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x1017D3C))(this, newValue);
	}
	template <typename R = void> R ReplaceNextMilestone(int32_t newValue) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101DDB8))(this, newValue);
	}
	template <typename R = void> R RemoveNextMilestone() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101DEBC))(this);
	}
	template <typename R = OldBlueprintComponent*> R get_oldBlueprint() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101DEC8))(this);
	}
	template <typename R = bool> R get_hasOldBlueprint() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101DF50))(this);
	}
	template <typename R = void> R AddOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(TrophyRoadEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x101DF5C))(this, newNames);
	}
	template <typename R = void> R ReplaceOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(TrophyRoadEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x101E070))(this, newNames);
	}
	template <typename R = void> R RemoveOldBlueprint() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101E184))(this);
	}
	template <typename R = bool> R get_isOpenCityCashed() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101947C))(this);
	}
	template <typename R = void> R set_isOpenCityCashed(bool value) {
		return ((R (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x1019488))(this, value);
	}
	template <typename R = bool> R get_isOpenCity() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1019470))(this);
	}
	template <typename R = void> R set_isOpenCity(bool value) {
		return ((R (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x101E190))(this, value);
	}
	template <typename R = ParametersComponent*> R get_parameters() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101E2A8))(this);
	}
	template <typename R = bool> R get_hasParameters() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101E330))(this);
	}
	template <typename R = void> R AddParameters(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(TrophyRoadEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x101E33C))(this, newNames);
	}
	template <typename R = void> R ReplaceParameters(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(TrophyRoadEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x101E450))(this, newNames);
	}
	template <typename R = void> R RemoveParameters() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101E564))(this);
	}
	template <typename R = RecipesCachedComponent*> R get_recipesCached() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101E570))(this);
	}
	template <typename R = bool> R get_hasRecipesCached() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101E5F8))(this);
	}
	template <typename R = void> R AddRecipesCached(Il2CppList<Il2CppString*>* newList) {
		return ((R (*)(TrophyRoadEntity*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x10189AC))(this, newList);
	}
	template <typename R = void> R ReplaceRecipesCached(Il2CppList<Il2CppString*>* newList) {
		return ((R (*)(TrophyRoadEntity*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x101E604))(this, newList);
	}
	template <typename R = void> R RemoveRecipesCached() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101E718))(this);
	}
	template <typename R = RecipesComponent*> R get_recipes() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018924))(this);
	}
	template <typename R = bool> R get_hasRecipes() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018918))(this);
	}
	template <typename R = void> R AddRecipes(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(TrophyRoadEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x101E724))(this, newValues);
	}
	template <typename R = void> R ReplaceRecipes(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(TrophyRoadEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x101E838))(this, newValues);
	}
	template <typename R = void> R RemoveRecipes() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101E94C))(this);
	}
	template <typename R = bool> R get_isRepairBenchCashed() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x10195AC))(this);
	}
	template <typename R = void> R set_isRepairBenchCashed(bool value) {
		return ((R (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x10195B8))(this, value);
	}
	template <typename R = bool> R get_isRepairBench() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x10195A0))(this);
	}
	template <typename R = void> R set_isRepairBench(bool value) {
		return ((R (*)(TrophyRoadEntity*, bool))(Il2CppBase() + 0x101E958))(this, value);
	}
	template <typename R = RequiredComponent*> R get_required() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1017C20))(this);
	}
	template <typename R = bool> R get_hasRequired() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101EA70))(this);
	}
	template <typename R = void> R AddRequired(int32_t newLevel) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101EA7C))(this, newLevel);
	}
	template <typename R = void> R ReplaceRequired(int32_t newLevel) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101EB80))(this, newLevel);
	}
	template <typename R = void> R RemoveRequired() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101EC84))(this);
	}
	template <typename R = ResourcesComponent*> R get_resources() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101EC90))(this);
	}
	template <typename R = bool> R get_hasResources() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101ED18))(this);
	}
	template <typename R = void> R AddResources(Il2CppArray<Resource>* newList) {
		return ((R (*)(TrophyRoadEntity*, Il2CppArray<Resource>*))(Il2CppBase() + 0x101ED24))(this, newList);
	}
	template <typename R = void> R ReplaceResources(Il2CppArray<Resource>* newList) {
		return ((R (*)(TrophyRoadEntity*, Il2CppArray<Resource>*))(Il2CppBase() + 0x101EE38))(this, newList);
	}
	template <typename R = void> R RemoveResources() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101EF4C))(this);
	}
	template <typename R = ShamanChanceCachedComponent*> R get_shamanChanceCached() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018AC0))(this);
	}
	template <typename R = bool> R get_hasShamanChanceCached() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101EF58))(this);
	}
	template <typename R = void> R AddShamanChanceCached(float newValue) {
		return ((R (*)(TrophyRoadEntity*, float))(Il2CppBase() + 0x1018BDC))(this, newValue);
	}
	template <typename R = void> R ReplaceShamanChanceCached(float newValue) {
		return ((R (*)(TrophyRoadEntity*, float))(Il2CppBase() + 0x101EF64))(this, newValue);
	}
	template <typename R = void> R RemoveShamanChanceCached() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101F068))(this);
	}
	template <typename R = ShamanChanceComponent*> R get_shamanChance() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018B54))(this);
	}
	template <typename R = bool> R get_hasShamanChance() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018B48))(this);
	}
	template <typename R = void> R AddShamanChance(float newValue) {
		return ((R (*)(TrophyRoadEntity*, float))(Il2CppBase() + 0x101F074))(this, newValue);
	}
	template <typename R = void> R ReplaceShamanChance(float newValue) {
		return ((R (*)(TrophyRoadEntity*, float))(Il2CppBase() + 0x101F178))(this, newValue);
	}
	template <typename R = void> R RemoveShamanChance() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101F27C))(this);
	}
	template <typename R = SilverComponent*> R get_silver() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101F288))(this);
	}
	template <typename R = bool> R get_hasSilver() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101F310))(this);
	}
	template <typename R = void> R AddSilver(int32_t newCount) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101F31C))(this, newCount);
	}
	template <typename R = void> R ReplaceSilver(int32_t newCount) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101F420))(this, newCount);
	}
	template <typename R = void> R RemoveSilver() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101F524))(this);
	}
	template <typename R = TargetTagsComponent*> R get_targetTags() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1017CB4))(this);
	}
	template <typename R = bool> R get_hasTargetTags() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1017CA8))(this);
	}
	template <typename R = void> R AddTargetTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(TrophyRoadEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x101F530))(this, newValues);
	}
	template <typename R = void> R ReplaceTargetTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(TrophyRoadEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x101F644))(this, newValues);
	}
	template <typename R = void> R RemoveTargetTags() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101F758))(this);
	}
	template <typename R = TaxCachedComponent*> R get_taxCached() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x10185E4))(this);
	}
	template <typename R = bool> R get_hasTaxCached() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101F764))(this);
	}
	template <typename R = void> R AddTaxCached(float newValue) {
		return ((R (*)(TrophyRoadEntity*, float))(Il2CppBase() + 0x1018700))(this, newValue);
	}
	template <typename R = void> R ReplaceTaxCached(float newValue) {
		return ((R (*)(TrophyRoadEntity*, float))(Il2CppBase() + 0x101F770))(this, newValue);
	}
	template <typename R = void> R RemoveTaxCached() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101F874))(this);
	}
	template <typename R = TaxComponent*> R get_tax() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1018678))(this);
	}
	template <typename R = bool> R get_hasTax() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101866C))(this);
	}
	template <typename R = void> R AddTax(float newValue) {
		return ((R (*)(TrophyRoadEntity*, float))(Il2CppBase() + 0x101F880))(this, newValue);
	}
	template <typename R = void> R ReplaceTax(float newValue) {
		return ((R (*)(TrophyRoadEntity*, float))(Il2CppBase() + 0x101F984))(this, newValue);
	}
	template <typename R = void> R RemoveTax() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101FA88))(this);
	}
	template <typename R = TierComponent*> R get_tier() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1017EEC))(this);
	}
	template <typename R = bool> R get_hasTier() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x1017EE0))(this);
	}
	template <typename R = void> R AddTier(int32_t newValue) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101FA94))(this, newValue);
	}
	template <typename R = void> R ReplaceTier(int32_t newValue) {
		return ((R (*)(TrophyRoadEntity*, int32_t))(Il2CppBase() + 0x101FB98))(this, newValue);
	}
	template <typename R = void> R RemoveTier() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101FC9C))(this);
	}
	template <typename R = UniqueLookupComponent*> R get_uniqueLookup() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101FCA8))(this);
	}
	template <typename R = bool> R get_hasUniqueLookup() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101FD30))(this);
	}
	template <typename R = void> R AddUniqueLookup(Il2CppString* newName) {
		return ((R (*)(TrophyRoadEntity*, Il2CppString*))(Il2CppBase() + 0x101FD3C))(this, newName);
	}
	template <typename R = void> R ReplaceUniqueLookup(Il2CppString* newName) {
		return ((R (*)(TrophyRoadEntity*, Il2CppString*))(Il2CppBase() + 0x101FE50))(this, newName);
	}
	template <typename R = void> R RemoveUniqueLookup() {
		return ((R (*)(TrophyRoadEntity*))(Il2CppBase() + 0x101FF64))(this);
	}

};

