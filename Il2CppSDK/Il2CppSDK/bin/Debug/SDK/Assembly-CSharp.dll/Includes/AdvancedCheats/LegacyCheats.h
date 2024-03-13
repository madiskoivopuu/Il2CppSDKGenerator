#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AdvancedCheats {

class LegacyCheats
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "LegacyCheats"));
	}

	template <typename T = AdvancedCheatsWindow*> T& window() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> static T& ShowPointsName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& CustomCheats() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& BaseResourcesButton() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& LevelUpButton() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& LevelUp10Button() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& SpawnObject() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& AddCoins() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& CoinsInputField() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& AddGuildCoins() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& GuildCoinsInputField() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& AddTickets() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& TicketsInputField() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& AddInfluence() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& InfluenceInputField() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& AddSilver() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& SilverInputField() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& AddGiantReputation() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& GiantReputationInputField() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& AddSeasonPoints() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& AddSeasonPointsInputField() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& AddPortalsPoints() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& AddPortalsPointsInputField() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& AddVIPPoints() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& AddVIPPointsInputField() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& SetNextPortalPoints() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& SetNextPortalInputField() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& AddResourcesButton() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& SendToMailButton() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& AddQuestProgressButton() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& ResetDailyButton() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& Add100ExpButton() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& AddResourcesInputField() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& SetDistrictLevelButton() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& DistrictLevelInputField() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& SetVIPLevelButton() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& VIPLevelInputField() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& AddResourcesForCartButton() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& AddResourcesForCraftButton() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& AddResourcesForConstructionButton() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& CrashClientButton() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& LoadCartButton() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& ResetCartButton() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& KarmaPlus() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& KarmaMinus() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& AddTournamentPoints10() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& AddTournamentPoints100() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& ResetVIPPoints() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& AddResourcesForFontanelButton() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& KillAll() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& KillAllIgnoreBossCheat() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& ResetCooldowns() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& RefillEnergy() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& Consume10Energy() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& ResetLicense() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& QuestsDebug() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& ShowIntro() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& ShowClasses() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = uintptr_t> T& OpenAllClasses() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = uintptr_t> T& PlusFow() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& MinusFow() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = uintptr_t> T& Fps60() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = uintptr_t> T& Fps30() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = uintptr_t> T& UIResolutionButton() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = uintptr_t> T& SkipTutorial() {
		return *(T*)((uintptr_t)this + 0x210);
	}
	template <typename T = uintptr_t> T& SkipNorthTutorial() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = uintptr_t> T& OpenElvesLands() {
		return *(T*)((uintptr_t)this + 0x220);
	}
	template <typename T = uintptr_t> T& Resurrect() {
		return *(T*)((uintptr_t)this + 0x228);
	}
	template <typename T = uintptr_t> T& FreeCraft() {
		return *(T*)((uintptr_t)this + 0x230);
	}
	template <typename T = uintptr_t> T& AddAllMounts() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = uintptr_t> T& AddStableResourcesToMail() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = uintptr_t> T& PingText() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = uintptr_t> T& KarmaText() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = uintptr_t> T& ConfigVersionText() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = uintptr_t> T& LocalizationVersionText() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = TextButtonMonoBehaviour*> T& DoubleSend() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = uintptr_t> T& UIResolutionNormal() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = uintptr_t> T& UIResolution4k() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = uintptr_t> T& DebugText() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = uintptr_t> T& ShowDebugToggle() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = uintptr_t> T& ShowPowerRating() {
		return *(T*)((uintptr_t)this + 0x290);
	}
	template <typename T = uintptr_t> T& ShowPvpGroup() {
		return *(T*)((uintptr_t)this + 0x298);
	}
	template <typename T = uintptr_t> T& ShowPointsNameToggle() {
		return *(T*)((uintptr_t)this + 0x2A0);
	}

	template <typename T = DataContext*> T get_Context() {
		return ((T (*)(LegacyCheats*))(Il2CppBase() + 0x142B224))(this);
	}
	template <typename T = UIWindowsManager*> T get_Manager() {
		return ((T (*)(LegacyCheats*))(Il2CppBase() + 0x142B270))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(LegacyCheats*))(Il2CppBase() + 0x142B28C))(this);
	}
	template <typename T = void> T OnResetCooldowns() {
		return ((T (*)(LegacyCheats*))(Il2CppBase() + 0x142B290))(this);
	}
	template <typename T = void> T SwithUIResolution() {
		return ((T (*)(LegacyCheats*))(Il2CppBase() + 0x142B294))(this);
	}
	template <typename T = void> T OnShow(AdvancedCheatsWindow* window) {
		return ((T (*)(LegacyCheats*, AdvancedCheatsWindow*))(Il2CppBase() + 0x142B424))(this, window);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(LegacyCheats*, float))(Il2CppBase() + 0x142B428))(this, deltaTime);
	}
	template <typename T = void> T UpdatePvpDebugUI(uintptr_t label) {
		return ((T (*)(LegacyCheats*, uintptr_t))(Il2CppBase() + 0x142B488))(this, label);
	}
	template <typename T = void> T CheatAddQuestProgress(Il2CppString* inputFieldText) {
		return ((T (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B48C))(this, inputFieldText);
	}
	template <typename T = void> T CheatSpawnObject(Il2CppString* inputFieldText) {
		return ((T (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B490))(this, inputFieldText);
	}
	template <typename T = void> T CheatAddResources(Il2CppString* inputFieldText) {
		return ((T (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B494))(this, inputFieldText);
	}
	template <typename T = void> T CheatSendToMail(Il2CppString* inputFieldText) {
		return ((T (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B498))(this, inputFieldText);
	}
	template <typename T = void> T ParceResourceStringAndSend(Il2CppString* inputFieldText, Action3Il2CppString*, int32_t, Nullable1float>*>* onParce) {
		return ((T (*)(LegacyCheats*, Il2CppString*, Action3Il2CppString*, int32_t, Nullable1float>*>*))(Il2CppBase() + 0x142B49C))(this, inputFieldText, onParce);
	}
	template <typename T = void> T CheatAllMounts() {
		return ((T (*)(LegacyCheats*))(Il2CppBase() + 0x142B4A0))(this);
	}
	template <typename T = void> T CheatAddResourcesForCart() {
		return ((T (*)(LegacyCheats*))(Il2CppBase() + 0x142B674))(this);
	}
	template <typename T = void> T CheatAddResourcesForFontanel() {
		return ((T (*)(LegacyCheats*))(Il2CppBase() + 0x142B678))(this);
	}
	template <typename T = void> T CheatAddResourcesForCraft() {
		return ((T (*)(LegacyCheats*))(Il2CppBase() + 0x142B67C))(this);
	}
	template <typename T = void> T CheatCrashClient() {
		return ((T (*)(LegacyCheats*))(Il2CppBase() + 0x142B680))(this);
	}
	template <typename T = void> T CrashClient() {
		return ((T (*)(LegacyCheats*))(Il2CppBase() + 0x142B684))(this);
	}
	template <typename T = uintptr_t> T CheatsCrashClientCoroutine() {
		return ((T (*)(LegacyCheats*))(Il2CppBase() + 0x142B6B0))(this);
	}
	template <typename T = void> T CheatSetDistrictLevel(Il2CppString* inputFieldText) {
		return ((T (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B70C))(this, inputFieldText);
	}
	template <typename T = void> T CheatSetVIPLevel(Il2CppString* inputFieldText) {
		return ((T (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B710))(this, inputFieldText);
	}
	template <typename T = void> T CheatAddStableResourcesToMail() {
		return ((T (*)(LegacyCheats*))(Il2CppBase() + 0x142B714))(this);
	}
	template <typename T = void> T CheatResetVIPPoints() {
		return ((T (*)(LegacyCheats*))(Il2CppBase() + 0x142B718))(this);
	}
	template <typename T = void> T CheatAddCoins(Il2CppString* inputFieldText) {
		return ((T (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B71C))(this, inputFieldText);
	}
	template <typename T = void> T CheatAddGuildCoins(Il2CppString* inputFieldText) {
		return ((T (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B720))(this, inputFieldText);
	}
	template <typename T = void> T CheatAddTickets(Il2CppString* inputFieldText) {
		return ((T (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B724))(this, inputFieldText);
	}
	template <typename T = void> T CheatAddInfluence(Il2CppString* inputFieldText) {
		return ((T (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B728))(this, inputFieldText);
	}
	template <typename T = void> T CheatAddSilver(Il2CppString* inputFieldText) {
		return ((T (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B72C))(this, inputFieldText);
	}
	template <typename T = void> T CheatAddGiantReputation(Il2CppString* inputFieldText) {
		return ((T (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B730))(this, inputFieldText);
	}
	template <typename T = void> T CheatAddSeasonPoints(Il2CppString* inputFieldText) {
		return ((T (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B734))(this, inputFieldText);
	}
	template <typename T = void> T CheatAddPortalsPoints(Il2CppString* inputFieldText) {
		return ((T (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B738))(this, inputFieldText);
	}
	template <typename T = void> T CheatAddVIPPoints(Il2CppString* inputFieldText) {
		return ((T (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B73C))(this, inputFieldText);
	}
	template <typename T = void> T CheatSetNextPortal(Il2CppString* inputFieldText) {
		return ((T (*)(LegacyCheats*, Il2CppString*))(Il2CppBase() + 0x142B740))(this, inputFieldText);
	}

};

}
