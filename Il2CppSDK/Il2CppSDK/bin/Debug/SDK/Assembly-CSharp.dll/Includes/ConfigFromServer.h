#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConfigFromServer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigFromServer"));
	}

	template <typename R = ConfigFromServer*> static R& Default() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& RAID_MIN_LEVEL() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& TOURNAMENT_MIN_LEVEL() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = int32_t> R& CLANGUILD_MIN_LEVEL() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& PVP_SEARCHING_TIME() {
		return *(R*)((uintptr_t)this + 0xC);
	}
	template <typename R = int32_t> R& PVP_COMBAT_TIME() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& PVP_PEACESHIELD_TIME() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> R& SHIELD_TIME_SECOND() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& SHIELD_MAX_SECOND() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = int32_t> R& TOURNAMENT_SEARCHING_TIME() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& TOURNAMENT_ACTIVE_TIME() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> R& TOURNAMENT_COOLDOWN() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& DAILY_MAX_TOURNAMENTS() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = bool> R& IS_FPSANALYTICS_ENABLED() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& FPSANALYTICS_EVENT_INTERVAL() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = int32_t> R& FPSANALYTICS_UPDATE_INTERVAL() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> R& FPSLIMIT_ANALYTICS() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = bool> R& IS_PING_ANALYTICS_ENABLED() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> R& PING_ANALYTICS_EVENT_INTERVAL() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = int32_t> R& PING_ANALYTICS_UPDATE_INTERVAL() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> R& PING_LIMIT_ANALYTICS() {
		return *(R*)((uintptr_t)this + 0x4C);
	}
	template <typename R = int32_t> R& CONTACTS_FAVOURITE_MAX() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> R& CONTACTS_RECENT_MAX() {
		return *(R*)((uintptr_t)this + 0x54);
	}
	template <typename R = int32_t> R& GUILD_CREATE_MIN_LEVEL() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> R& GUILD_CREATE_SILVER() {
		return *(R*)((uintptr_t)this + 0x5C);
	}
	template <typename R = int32_t> R& GUILD_UPDATE_COINS() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = float> R& ODIN_CUP_PROC_NORMAL() {
		return *(R*)((uintptr_t)this + 0x64);
	}
	template <typename R = float> R& ODIN_CUP_PROC_SUPER() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = float> R& FREYR_CUP_PROC_NORMAL() {
		return *(R*)((uintptr_t)this + 0x6C);
	}
	template <typename R = float> R& FREYR_CUP_PROC_SUPER() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = int32_t> R& PORTALS_WIN_N_FACTOR() {
		return *(R*)((uintptr_t)this + 0x74);
	}
	template <typename R = int32_t> R& PORTALS_WIN_K_FACTOR() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = bool> R& CHAT_LOGIN_V2() {
		return *(R*)((uintptr_t)this + 0x7C);
	}
	template <typename R = bool> R& CHAT_REGISTRATION_V2() {
		return *(R*)((uintptr_t)this + 0x7D);
	}
	template <typename R = bool> R& CHAT_RELOGIN_V2() {
		return *(R*)((uintptr_t)this + 0x7E);
	}
	template <typename R = int32_t> R& GUILD_CIRCLE_OFFSET() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = int32_t> R& GUILD_CIRCLE_DURATION() {
		return *(R*)((uintptr_t)this + 0x84);
	}
	template <typename R = int32_t> R& GUILD_CIRCLE_REST_DURATION() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = int32_t> R& GUILD_CIRCLE_REVERSE_OFFSET() {
		return *(R*)((uintptr_t)this + 0x8C);
	}
	template <typename R = bool> R& IS_KEFIR_ID_ENABLED() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = int32_t> R& DAILY_CHEST_UNCOMMON_BONUS_DEFAULT() {
		return *(R*)((uintptr_t)this + 0x94);
	}
	template <typename R = int32_t> R& DAILY_CHEST_RARE_BONUS_DEFAULT() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = int32_t> R& DAILY_CHEST_EPIC_BONUS_DEFAULT() {
		return *(R*)((uintptr_t)this + 0x9C);
	}
	template <typename R = bool> R& MANUAL_TRACKING_ENABLED() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = bool> R& TRACKING_MANAGEMENT_TAB_ENABLED() {
		return *(R*)((uintptr_t)this + 0xA1);
	}
	template <typename R = bool> R& USE_ALL_QUESTS_WINDOW() {
		return *(R*)((uintptr_t)this + 0xA2);
	}
	template <typename R = bool> R& VIP_ENABLED() {
		return *(R*)((uintptr_t)this + 0xA3);
	}
	template <typename R = bool> R& MATCHMAKING_V2() {
		return *(R*)((uintptr_t)this + 0xA4);
	}
	template <typename R = bool> R& ISCYCLICSERVER() {
		return *(R*)((uintptr_t)this + 0xA5);
	}
	 Il2CppDictionary<Il2CppString*, ValueTuple2int32_t, int32_t>*>*& DungeonSavePeriod() {
		return *(Il2CppDictionary<Il2CppString*, ValueTuple2int32_t, int32_t>*>**)((uintptr_t)this + 0xA8);
	}
	template <typename R = int32_t> R& DungeonSavePeriodDefault() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = int32_t> R& DungeonSaveOffsetDefault() {
		return *(R*)((uintptr_t)this + 0xB4);
	}
	template <typename R = int32_t> R& CyclicPriceTokenForVip() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = int32_t> R& CyclicPriceVipForVip() {
		return *(R*)((uintptr_t)this + 0xBC);
	}
	template <typename R = Il2CppArray<int64_t>*> R& EnableLocationsResetByUser() {
		return *(R*)((uintptr_t)this + 0xC0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ConfigFromServer*, uintptr_t))(Il2CppBase() + 0x15DD5E8))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ConfigFromServer*, uintptr_t))(Il2CppBase() + 0x15DDBB0))(this, reader);
	}

};

