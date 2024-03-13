#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConfigFromServer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigFromServer"));
	}

	template <typename T = ConfigFromServer*> static T& Default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& RAID_MIN_LEVEL() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& TOURNAMENT_MIN_LEVEL() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& CLANGUILD_MIN_LEVEL() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& PVP_SEARCHING_TIME() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& PVP_COMBAT_TIME() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& PVP_PEACESHIELD_TIME() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& SHIELD_TIME_SECOND() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& SHIELD_MAX_SECOND() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& TOURNAMENT_SEARCHING_TIME() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& TOURNAMENT_ACTIVE_TIME() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& TOURNAMENT_COOLDOWN() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& DAILY_MAX_TOURNAMENTS() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& IS_FPSANALYTICS_ENABLED() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& FPSANALYTICS_EVENT_INTERVAL() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& FPSANALYTICS_UPDATE_INTERVAL() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& FPSLIMIT_ANALYTICS() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& IS_PING_ANALYTICS_ENABLED() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& PING_ANALYTICS_EVENT_INTERVAL() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& PING_ANALYTICS_UPDATE_INTERVAL() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& PING_LIMIT_ANALYTICS() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& CONTACTS_FAVOURITE_MAX() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& CONTACTS_RECENT_MAX() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& GUILD_CREATE_MIN_LEVEL() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& GUILD_CREATE_SILVER() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& GUILD_UPDATE_COINS() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& ODIN_CUP_PROC_NORMAL() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& ODIN_CUP_PROC_SUPER() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& FREYR_CUP_PROC_NORMAL() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& FREYR_CUP_PROC_SUPER() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& PORTALS_WIN_N_FACTOR() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& PORTALS_WIN_K_FACTOR() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& CHAT_LOGIN_V2() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& CHAT_REGISTRATION_V2() {
		return *(T*)((uintptr_t)this + 0x7D);
	}
	template <typename T = bool> T& CHAT_RELOGIN_V2() {
		return *(T*)((uintptr_t)this + 0x7E);
	}
	template <typename T = int32_t> T& GUILD_CIRCLE_OFFSET() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& GUILD_CIRCLE_DURATION() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& GUILD_CIRCLE_REST_DURATION() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& GUILD_CIRCLE_REVERSE_OFFSET() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& IS_KEFIR_ID_ENABLED() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& DAILY_CHEST_UNCOMMON_BONUS_DEFAULT() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& DAILY_CHEST_RARE_BONUS_DEFAULT() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& DAILY_CHEST_EPIC_BONUS_DEFAULT() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& MANUAL_TRACKING_ENABLED() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& TRACKING_MANAGEMENT_TAB_ENABLED() {
		return *(T*)((uintptr_t)this + 0xA1);
	}
	template <typename T = bool> T& USE_ALL_QUESTS_WINDOW() {
		return *(T*)((uintptr_t)this + 0xA2);
	}
	template <typename T = bool> T& VIP_ENABLED() {
		return *(T*)((uintptr_t)this + 0xA3);
	}
	template <typename T = bool> T& MATCHMAKING_V2() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& ISCYCLICSERVER() {
		return *(T*)((uintptr_t)this + 0xA5);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, ValueTuple2int32_t, int32_t>*>*> T& DungeonSavePeriod() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& DungeonSavePeriodDefault() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& DungeonSaveOffsetDefault() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& CyclicPriceTokenForVip() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& CyclicPriceVipForVip() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& EnableLocationsResetByUser() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ConfigFromServer*, uintptr_t))(Il2CppBase() + 0x15DD5E8))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ConfigFromServer*, uintptr_t))(Il2CppBase() + 0x15DDBB0))(this, reader);
	}

};

