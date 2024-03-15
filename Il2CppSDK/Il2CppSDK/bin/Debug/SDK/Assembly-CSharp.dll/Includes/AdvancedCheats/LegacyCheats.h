#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AdvancedCheats {

class LegacyCheats
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "LegacyCheats"));
	}

	template <typename R = AdvancedCheats::AdvancedCheatsWindow*> R& window() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> static R& ShowPointsName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& CustomCheats() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& BaseResourcesButton() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& LevelUpButton() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& LevelUp10Button() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& SpawnObject() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& AddCoins() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& CoinsInputField() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& AddGuildCoins() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& GuildCoinsInputField() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& AddTickets() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& TicketsInputField() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& AddInfluence() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& InfluenceInputField() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& AddSilver() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& SilverInputField() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& AddGiantReputation() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& GiantReputationInputField() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& AddSeasonPoints() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& AddSeasonPointsInputField() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& AddPortalsPoints() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& AddPortalsPointsInputField() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& AddVIPPoints() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& AddVIPPointsInputField() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& SetNextPortalPoints() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& SetNextPortalInputField() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& AddResourcesButton() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = uintptr_t> R& SendToMailButton() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& AddQuestProgressButton() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& ResetDailyButton() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = uintptr_t> R& Add100ExpButton() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = uintptr_t> R& AddResourcesInputField() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = uintptr_t> R& SetDistrictLevelButton() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = uintptr_t> R& DistrictLevelInputField() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = uintptr_t> R& SetVIPLevelButton() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = uintptr_t> R& VIPLevelInputField() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = uintptr_t> R& AddResourcesForCartButton() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = uintptr_t> R& AddResourcesForCraftButton() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	template <typename R = uintptr_t> R& AddResourcesForConstructionButton() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = uintptr_t> R& CrashClientButton() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = uintptr_t> R& LoadCartButton() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = uintptr_t> R& ResetCartButton() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = uintptr_t> R& KarmaPlus() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = uintptr_t> R& KarmaMinus() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = uintptr_t> R& AddTournamentPoints10() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = uintptr_t> R& AddTournamentPoints100() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	template <typename R = uintptr_t> R& ResetVIPPoints() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = uintptr_t> R& AddResourcesForFontanelButton() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = uintptr_t> R& KillAll() {
		return *(R*)((uintptr_t)this + 0x198);
	}
	template <typename R = uintptr_t> R& KillAllIgnoreBossCheat() {
		return *(R*)((uintptr_t)this + 0x1A0);
	}
	template <typename R = uintptr_t> R& ResetCooldowns() {
		return *(R*)((uintptr_t)this + 0x1A8);
	}
	template <typename R = uintptr_t> R& RefillEnergy() {
		return *(R*)((uintptr_t)this + 0x1B0);
	}
	template <typename R = uintptr_t> R& Consume10Energy() {
		return *(R*)((uintptr_t)this + 0x1B8);
	}
	template <typename R = uintptr_t> R& ResetLicense() {
		return *(R*)((uintptr_t)this + 0x1C0);
	}
	template <typename R = uintptr_t> R& QuestsDebug() {
		return *(R*)((uintptr_t)this + 0x1C8);
	}
	template <typename R = uintptr_t> R& ShowIntro() {
		return *(R*)((uintptr_t)this + 0x1D0);
	}
	template <typename R = uintptr_t> R& ShowClasses() {
		return *(R*)((uintptr_t)this + 0x1D8);
	}
	template <typename R = uintptr_t> R& OpenAllClasses() {
		return *(R*)((uintptr_t)this + 0x1E0);
	}
	template <typename R = uintptr_t> R& PlusFow() {
		return *(R*)((uintptr_t)this + 0x1E8);
	}
	template <typename R = uintptr_t> R& MinusFow() {
		return *(R*)((uintptr_t)this + 0x1F0);
	}
	template <typename R = uintptr_t> R& Fps60() {
		return *(R*)((uintptr_t)this + 0x1F8);
	}
	template <typename R = uintptr_t> R& Fps30() {
		return *(R*)((uintptr_t)this + 0x200);
	}
	template <typename R = uintptr_t> R& UIResolutionButton() {
		return *(R*)((uintptr_t)this + 0x208);
	}
	template <typename R = uintptr_t> R& SkipTutorial() {
		return *(R*)((uintptr_t)this + 0x210);
	}
	template <typename R = uintptr_t> R& SkipNorthTutorial() {
		return *(R*)((uintptr_t)this + 0x218);
	}
	template <typename R = uintptr_t> R& OpenElvesLands() {
		return *(R*)((uintptr_t)this + 0x220);
	}
	template <typename R = uintptr_t> R& Resurrect() {
		return *(R*)((uintptr_t)this + 0x228);
	}
	template <typename R = uintptr_t> R& FreeCraft() {
		return *(R*)((uintptr_t)this + 0x230);
	}
	template <typename R = uintptr_t> R& AddAllMounts() {
		return *(R*)((uintptr_t)this + 0x238);
	}
	template <typename R = uintptr_t> R& AddStableResourcesToMail() {
		return *(R*)((uintptr_t)this + 0x240);
	}
	template <typename R = uintptr_t> R& PingText() {
		return *(R*)((uintptr_t)this + 0x248);
	}
	template <typename R = uintptr_t> R& KarmaText() {
		return *(R*)((uintptr_t)this + 0x250);
	}
	template <typename R = uintptr_t> R& ConfigVersionText() {
		return *(R*)((uintptr_t)this + 0x258);
	}
	template <typename R = uintptr_t> R& LocalizationVersionText() {
		return *(R*)((uintptr_t)this + 0x260);
	}
	template <typename R = TextButtonMonoBehaviour*> R& DoubleSend() {
		return *(R*)((uintptr_t)this + 0x268);
	}
	template <typename R = uintptr_t> R& UIResolutionNormal() {
		return *(R*)((uintptr_t)this + 0x270);
	}
	template <typename R = uintptr_t> R& UIResolution4k() {
		return *(R*)((uintptr_t)this + 0x278);
	}
	template <typename R = uintptr_t> R& DebugText() {
		return *(R*)((uintptr_t)this + 0x280);
	}
	template <typename R = uintptr_t> R& ShowDebugToggle() {
		return *(R*)((uintptr_t)this + 0x288);
	}
	template <typename R = uintptr_t> R& ShowPowerRating() {
		return *(R*)((uintptr_t)this + 0x290);
	}
	template <typename R = uintptr_t> R& ShowPvpGroup() {
		return *(R*)((uintptr_t)this + 0x298);
	}
	template <typename R = uintptr_t> R& ShowPointsNameToggle() {
		return *(R*)((uintptr_t)this + 0x2A0);
	}

	template <typename R = DataContext*> R get_Context() {
		return ((R (*)(LegacyCheats*))(Il2CppBase() + 0x142B224))(this);
	}
	template <typename R = UIWindowsManager*> R get_Manager() {
		return ((R (*)(LegacyCheats*))(Il2CppBase() + 0x142B270))(this);
	}
	template <typename R = void> R Initialize() {
		return ((R (*)(LegacyCheats*))(Il2CppBase() + 0x142B28C))(this);
	}
	template <typename R = void> R OnResetCooldowns() {
		return ((R (*)(LegacyCheats*))(Il2CppBase() + 0x142B290))(this);
	}
	template <typename R = void> R SwithUIResolution() {
		return ((R (*)(LegacyCheats*))(Il2CppBase() + 0x142B294))(this);
	}
	template <typename R = void> R OnShow(AdvancedCheats::AdvancedCheatsWindow* window) {
		return ((R (*)(LegacyCheats*, AdvancedCheats::AdvancedCheatsWindow*))(Il2CppBase() + 0x142B424))(this, window);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(LegacyCheats*, float))(Il2CppBase() + 0x142B428))(this, deltaTime);
	}
	template <typename R = void> R UpdatePvpDebugUI(uintptr_t label) {
		return ((R (*)(LegacyCheats*, uintptr_t))(Il2CppBase() + 0x142B488))(this, label);
	}
	template <typename R = void> R CheatAddQuestProgress(Il2CppString* inputFieldText) {
		return ((R (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B48C))(this, inputFieldText);
	}
	template <typename R = void> R CheatSpawnObject(Il2CppString* inputFieldText) {
		return ((R (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B490))(this, inputFieldText);
	}
	template <typename R = void> R CheatAddResources(Il2CppString* inputFieldText) {
		return ((R (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B494))(this, inputFieldText);
	}
	template <typename R = void> R CheatSendToMail(Il2CppString* inputFieldText) {
		return ((R (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B498))(this, inputFieldText);
	}
	template <typename R = void> R ParceResourceStringAndSend(Il2CppString* inputFieldText, Action3<Il2CppString*, int32_t, Nullable1<float>*>* onParce) {
		return ((R (*)(LegacyCheats*, Il2CppString*, Action3<Il2CppString*, int32_t, Nullable1<float>*>*))(Il2CppBase() + 0x142B49C))(this, inputFieldText, onParce);
	}
	template <typename R = void> R CheatAllMounts() {
		return ((R (*)(LegacyCheats*))(Il2CppBase() + 0x142B4A0))(this);
	}
	template <typename R = void> R CheatAddResourcesForCart() {
		return ((R (*)(LegacyCheats*))(Il2CppBase() + 0x142B674))(this);
	}
	template <typename R = void> R CheatAddResourcesForFontanel() {
		return ((R (*)(LegacyCheats*))(Il2CppBase() + 0x142B678))(this);
	}
	template <typename R = void> R CheatAddResourcesForCraft() {
		return ((R (*)(LegacyCheats*))(Il2CppBase() + 0x142B67C))(this);
	}
	template <typename R = void> R CheatCrashClient() {
		return ((R (*)(LegacyCheats*))(Il2CppBase() + 0x142B680))(this);
	}
	template <typename R = void> R CrashClient() {
		return ((R (*)(LegacyCheats*))(Il2CppBase() + 0x142B684))(this);
	}
	template <typename R = uintptr_t> R CheatsCrashClientCoroutine() {
		return ((R (*)(LegacyCheats*))(Il2CppBase() + 0x142B6B0))(this);
	}
	template <typename R = void> R CheatSetDistrictLevel(Il2CppString* inputFieldText) {
		return ((R (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B70C))(this, inputFieldText);
	}
	template <typename R = void> R CheatSetVIPLevel(Il2CppString* inputFieldText) {
		return ((R (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B710))(this, inputFieldText);
	}
	template <typename R = void> R CheatAddStableResourcesToMail() {
		return ((R (*)(LegacyCheats*))(Il2CppBase() + 0x142B714))(this);
	}
	template <typename R = void> R CheatResetVIPPoints() {
		return ((R (*)(LegacyCheats*))(Il2CppBase() + 0x142B718))(this);
	}
	template <typename R = void> R CheatAddCoins(Il2CppString* inputFieldText) {
		return ((R (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B71C))(this, inputFieldText);
	}
	template <typename R = void> R CheatAddGuildCoins(Il2CppString* inputFieldText) {
		return ((R (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B720))(this, inputFieldText);
	}
	template <typename R = void> R CheatAddTickets(Il2CppString* inputFieldText) {
		return ((R (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B724))(this, inputFieldText);
	}
	template <typename R = void> R CheatAddInfluence(Il2CppString* inputFieldText) {
		return ((R (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B728))(this, inputFieldText);
	}
	template <typename R = void> R CheatAddSilver(Il2CppString* inputFieldText) {
		return ((R (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B72C))(this, inputFieldText);
	}
	template <typename R = void> R CheatAddGiantReputation(Il2CppString* inputFieldText) {
		return ((R (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B730))(this, inputFieldText);
	}
	template <typename R = void> R CheatAddSeasonPoints(Il2CppString* inputFieldText) {
		return ((R (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B734))(this, inputFieldText);
	}
	template <typename R = void> R CheatAddPortalsPoints(Il2CppString* inputFieldText) {
		return ((R (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B738))(this, inputFieldText);
	}
	template <typename R = void> R CheatAddVIPPoints(Il2CppString* inputFieldText) {
		return ((R (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B73C))(this, inputFieldText);
	}
	template <typename R = void> R CheatSetNextPortal(Il2CppString* inputFieldText) {
		return ((R (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B740))(this, inputFieldText);
	}

};

}
