#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientConfig"));
	}

	template <typename R = Il2CppString*> static R& PersonalInstanceIp() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& ApplicationIdentifier() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& BugReportFile() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& ConfigurationFile() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = char> static R& HTTPS_PREFIX() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& CraftBlueprintsInSeconds() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& LearnBlueprintsInSeconds() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename R = float> static R& TooltipDelayInSeconds() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = float> static R& WaitMeSendDelay() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& FrameTimeOnCreate() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& CreateTimeThreshold() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& RepairTimeInSeconds() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename R = Il2CppString*> static R& EMPTY_STRING() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& ZERO_STRING() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ANALYTICS_EVENT_SEND_TICKDELAY() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ANALYTICS_EVENT_RAID_TICKWAIT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& BorderLeaveGridSize() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& SettingsDiscordURL() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& SettingsDiscordOBTURL() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& RateUsDiscordURL() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& AppRulesURL() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& GPGS_DISMISSED() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& GAMECENTER_DISMISSED() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& DelayToChangeNextTotemRechargingTime() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& ShowConnectionProblemTime() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& LastDeviceIdsLoggedFromEditor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& GoogleIdFromEditor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& GamecenterIdFromEditor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& DEFAULT_FIELD_OF_VIEW() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& MarketUrl() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> static R& DiplomacyPeace() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = uintptr_t> static R& DiplomacyWar() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename R = uintptr_t> static R& DiplomacyNoOpponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename R = uintptr_t> static R& TotemActivePeriodColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename R = uintptr_t> static R& TotemInActivePeriodColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename R = uintptr_t> static R& AllyPingColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename R = uintptr_t> static R& MyPingColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename R = uintptr_t> static R& ActiveColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename R = uintptr_t> static R& PassiveColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename R = uintptr_t> static R& ShieldUIColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename R = Il2CppString*> static R& StartPlayerKillItem() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& EndPlayerKillItem() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& DeviceWarningDontShowAgain() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& PvpEndTimeKeyForPlayerPrefs() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& NewsIdWasReadKeyForPlayerPrefs() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& StoreSalesIdWasReadKeyForPlayerPrefs() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& MasterAccountForCyclicServerPlayerPrefsBattleTag() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& MasterAccountForCyclicServerPlayerPrefsPlayerName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& AnalyticsSpamProtectionPrefix() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& StoreInboxScrollBarLimit() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& AntonAnalyticsPeriod() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& TrophyRoadBuildInSeconds() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename R = int32_t> static R& MaxItemNotifyViewCount() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& NoFatalQuitKey() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& MinDurabilityCoef() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& MaxTikcsToShow() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> static R& RuneMaxGradeColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename R = uintptr_t> static R& ItemMaxGradeColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename R = uintptr_t> static R& CommonRedColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename R = uintptr_t> static R& DurabilityGreenColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename R = uintptr_t> static R& NoneClassRarityColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename R = uintptr_t> static R& CommonClassRarityColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename R = uintptr_t> static R& UncommonClassRarityColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename R = uintptr_t> static R& RareClassRarityColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename R = uintptr_t> static R& EpicClassRarityColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename R = uintptr_t> static R& LegendaryClassRarityColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename R = uintptr_t> static R& BOPClassRarityColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename R = uintptr_t> static R& NoneClassNameRarityColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename R = uintptr_t> static R& CommonClassNameRarityColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename R = uintptr_t> static R& UncommonClassNameRarityColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename R = uintptr_t> static R& RareClassNameRarityColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename R = uintptr_t> static R& EpicClassNameRarityColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x1A4);
	}
	template <typename R = uintptr_t> static R& LegendaryClassNameRarityColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x1B4);
	}
	template <typename R = uintptr_t> static R& BOPClassNameRarityColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x1C4);
	}
	template <typename R = uintptr_t> static R& CommonItemRarityColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x1D4);
	}
	template <typename R = uintptr_t> static R& UncommonItemRarityColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x1E4);
	}
	template <typename R = uintptr_t> static R& RareItemRarityColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x1F4);
	}
	template <typename R = uintptr_t> static R& EpicItemRarityColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x204);
	}
	template <typename R = uintptr_t> static R& LegendaryItemRarityColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x214);
	}
	template <typename R = uintptr_t> static R& BOPItemRarityColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x224);
	}
	template <typename R = uintptr_t> static R& CommonItemRarityTextColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x234);
	}
	template <typename R = uintptr_t> static R& UncommonItemRarityTextColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x244);
	}
	template <typename R = uintptr_t> static R& RareItemRarityTextColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x254);
	}
	template <typename R = uintptr_t> static R& EpicItemRarityTextColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x264);
	}
	template <typename R = uintptr_t> static R& LegendaryItemRarityTextColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x274);
	}
	template <typename R = uintptr_t> static R& BOPItemRarityTextColor() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x284);
	}
	template <typename R = int32_t> static R& GamePadPointerId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& DOUBLE_CLICK_SECONDS() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MinSpamMessageLength() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MaxSpamMessage() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& ChatMessageFrequencyInTicks() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& SpamMessageFrequencyInTicks() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& AccountAFKKickTimeout() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& AccountAFKKickWarningTimeout() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& AccountAFKShortKickTimeout() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& AccountAFKShortKickWarningTimeout() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& SavedServer() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& SavedSubRegion() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& SavedServerCyclic() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& SavedLastSelectedBlueprintKey() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> static R& NeedSaveLastSelectedBlueprint() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& GuildMaxMemberCount() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& GuildInviteExistTime() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& DefaultServer() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& DefaultRegion() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& DefaultCycRegion() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& ForceEnter() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> static R& ShowMagicTimer() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x294);
	}


};

