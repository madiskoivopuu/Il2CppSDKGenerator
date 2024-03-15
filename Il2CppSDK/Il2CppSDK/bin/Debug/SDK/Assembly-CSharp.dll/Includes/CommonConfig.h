#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CommonConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CommonConfig"));
	}

	template <typename R = GameVersion> static R& Version() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& ELCFix() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CLASS_RUNES_FIX_VERSION() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> static R& CanAttackWhenRiding() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> static R& CanInteractWhenRiding() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> static R& CanSwithSneakWhenRiding() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> static R& CanSwitchPlayerKillWhenRiding() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> static R& CanEquipFromHUDInventory() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> static R& ShowOldCustomizationWindow() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = int32_t> static R& QUEST_VERSION() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = DropOnDeath> static R& DROP_ON_DEATH() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename R = int64_t> static R& AFK_CLAN_ID() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = int64_t> static R& CREEP_CLAN_ID() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename R = int32_t> static R& MAX_CLASS_RUNES_COUNT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& LICANSE_AGREEMENT_VERSION() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& ACT_PREMIUN_PASS() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& QUAD_COUNT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& GRID_SIZE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& HALF_GRID_SIZE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& QUAD_GRID_SIZE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& QUAD_SIZE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& QUAD_CENTER() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& MIN_BUILD_DISTANCE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& MAX_CREATURE_RADIUS() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& MAX_DOOR_WALL_WIDTH() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& MAX_FURNITURE_DIMANTION() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& AVOID_OBSTACLE_DISTANCE_MAX() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& AVOID_OBSTACLE_DISTANCE_MIN() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& POSITION_TRESHOLD() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& VECTOR_FIELD_HALF_SIZE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& VECTOR_FIELD_SIZE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& LEAVE_ACTION_TIMEOUT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& ADS_TIMEOUT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& INVENTORY_COUNT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& INVENTORY_MAX_COUNT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& EMOJIS_SLOTS_MAX_COUNT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& DAMAGE_MODIFIER_COEF() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& RESURRECT_HEALTH() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& RESURRECT_SPEED_MULTIPLIER() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& RESURRECT_DAMAGE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& RESURRECT_PORTALS_DAMAGE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& RESURRECT_VALUE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& DOT_HOT_TICK() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& DOT_TOT_TICK() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& DOT_HOT_TICK_SECONDS() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& DOT_TOT_TICK_SECONDS() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& AURA_TICK_SECONDS() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& AURA_TICK() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& MINIMAP_PING_COOLDOWN() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& AUTOABILITY_TICK_SECONDS() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& AUTOABILITY_TICK() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& DECREASE_DURABILITY_PERCENT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& DECREASE_DURABILITY_PERCENT_PVP() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& ENEMY_ATTACK_YOUR_BASE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& WORLD_ACTIVE_TIMEOUT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& POCKET1_UNLOCK_LEVEL() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& POCKET2_UNLOCK_LEVEL() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& POCKET3_UNLOCK_LEVEL() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& SKILL1_UNLOCK_LEVEL() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& SKILL2_UNLOCK_LEVEL() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& RENAME_PRICE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CUSTOMIZATION_PRICE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& RENAME_CLAN_PRICE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& SERVERS_REBOOT_KEY() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& LOCATION_REBOOT_KEY() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& KICK_FROM_CLAN() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& PVP_COOLDOWN_MESSAGE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& DAILY_QUEST_RESET_HOUR() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& DEFAULT_BUG_REPORT_COUNT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& BUG_REPORT_DELAY() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> static R& NEED_SEND_LOG_FILE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& NEXT_PORTALS_RANGE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& PORTALS_POINT_DIFF_TO_JOIN() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& TIME_TO_COMPLETE_PORTAL() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& LOBBY_WAITING_TIME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& CHECK_ALIVE_PERIOD() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& INFINITY_PERIOD() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& GUILD_QUESTS_DAILY_LIMIT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> static R& TEST_NOT_GUILD_QUESTS_LIMITS() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename R = int32_t> static R& BASE_LEVEL_CAP() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MAX_TRACKED_QUEST_COUNT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MAX_HUD_TRACKED_QUESTS() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MAX_AUTO_FARM_VIP_ITEMS() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& VIPDAILY_SLOTS_DEFAULT_COUNT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> static R& WORLD_DATA_COMPRESSION() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> static R& INVENTORY_DATA_COMPRESSION() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Il2CppDictionary<Rarity, Il2CppArray<ValueTuple2<int32_t, int32_t>*>*>*& SKIP_PRICES() {
		return *(Il2CppDictionary<Rarity, Il2CppArray<ValueTuple2<int32_t, int32_t>*>*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static Il2CppDictionary<Rarity, Il2CppArray<ValueTuple2<int32_t, int32_t>*>*>*& SKIP_MOUNTS_PRICES() {
		return *(Il2CppDictionary<Rarity, Il2CppArray<ValueTuple2<int32_t, int32_t>*>*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename R = Il2CppArray<int32_t>*> static R& REPAIR_WEAPON_TAX_SILVER() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename R = Il2CppArray<int32_t>*> static R& REPAIR_ARMOR_TAX_SILVER() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename R = float> static R& VELOCITY_TRESHOLD_ANGLE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename R = float> static R& VELOCITY_TRESHOLD() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename R = float> static R& VELOCITY_CHANGE_SPEED() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename R = float> static R& DEATH_COUNT_RESET_TIME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename R = Il2CppArray<float>*> static R& DEATH_TIMEOUT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename R = int64_t> static R& MIN_SAVE_TIME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& MAX_SAVE_TIME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& ACTION_TIMEOUT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& RPC_REQUEST_TIMEOUT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& RECONNET_DELAY() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& CONNECT_WAIT_ME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& DISCONNECT_WAIT_TIME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& COMFORT_LAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& LOCK_MOVE_TIMEOUT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& PING_WARNING() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& PING_DISCONNECT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& PUSH_NOTIF_FULL_ENERGY_TEXT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& PUSH_NOTIF_ENEMY_ON_BASE_BODY() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& PUSH_NOTIF_ENEMY_ON_BASE_TITLE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& PUSH_NOTIF_ALLY_UNDER_ATTACK_BODY() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& PUSH_NOTIF_ALLY_UNDER_ATTACK_TITLE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& KARMA_PK_PK() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& KARMA_PK_P() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& KARMA_P_PK() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& KARMA_ENTER_LOCATION() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& KARMA_PK_ON() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& KARMA_PK_OFF() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& KARMA_PK_PVE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& CARAVAN_DRIVER_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& FONTANEL_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& ODINS_CUP_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& FREYRS_CUP_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& CORPSE_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& GADGET_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& CLASS_SKILL_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& HEALING_SKILL_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& CLONE_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& CLONE_NAME_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& SKILL_DAMAGE_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& TARGET_CLONE_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& TARGET_CLONE_NAME_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& SAVE_CD_ON_DEATH_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& SAVE_CD_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& WORKER_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& FESTIVE_TREE_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& NY_CHEST_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& SHOW_ADS_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& PLAYER_CELLAR_CHEST_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& DONT_SHOW_CHANGE_HEALTH_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& STORECATEGORY_HIDDEN_IN_CYCLICSERVER_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& STORECATEGORY_HIDDEN_IN_MAINSERVER_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& START_CLASS_1() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& START_CLASS_2() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& START_CLASS_3() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MaxSelectedClassSwitch() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppArray<uint8_t>*> static R& CELL_ORDER() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename R = Il2CppString*> static R& ChatCommonRoom() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ConfigFromServer> static R& FromServer() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename R = Il2CppString*> static R& CHAT_ALL_CHANNELS() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& CHAT_WORLD_CHANNEL() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& CHAT_CLAN_CHANNEL() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& CHAT_PVP_CHANNEL() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& CHAT_TOURNAMENT_CHANNEL() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& CHAT_CONTACTS_CHANNEL() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& CHAT_GUILD_CHANNEL() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& CHAT_GUILD_EVENTS_CHANNEL() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& CHAT_ARENA_NAME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& CHAT_ARENA_PASSWORD() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> static R& AlwaysKnockdown() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& TICKS_PER_SECOND() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> static R& AUTOFARM_RESET_TIME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& DEFAULT_PLAYER_ICON() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MAX_CART_RESOURCES_COUNT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MAX_FONTANEL_RESOURCES_COUNT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& CURRENT_TOURNAMENT_TYPE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& TEST_DAY_DURATION_SEC() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename R = int32_t> static R& OFFSET_H() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CIRCLE_DURATION_H() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& REST_DURATION_H() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& GLOBAL_OFFSET_H() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> static R& epoch() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename R = int32_t> static R& SECONDS_IN_HOUR() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& TAX_COEF_MIN() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& TAX_COEF_MAX() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& DEFAULT_DISTRICT_REQUIRED() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& NEXT_SHOW_FRIENDS_AD_KEY() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> static R& PvPChestTags() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename R = Il2CppString*> static R& NorthChestPvP() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& Stable_Selector() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& MOUNT_EQUIPED_MAP_ICON() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& MOUNT_NOT_EQUIPED_MAP_ICON() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& GUILD_NAME_MAX_LENGTH() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& GUILD_TAG_MAX_LENGTH() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& GUILD_DESCRIPTION_MAX_LENGTH() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& GUILD_MESSAGE_MAX_LENGTH() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& GUILD_BOSS_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& GUILD_BOSS_CORPSE_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> static R& GUILD_BOSS_DAMAGE_BONUS_TAGS() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename R = int32_t> static R& GUILD_BOSS_PARTICIPANT_REWARD() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& GUILD_BOSS_COMMON_REWARD() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& MAX_MOVE_STEP_COUNT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& BOSS_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& MINI_BOSS_TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> static R& BOSS_OR_MINIBOSS_TAGS() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename R = float> static R& BOSS_BONUS_COEF() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& DAILY_SHOP_MAX_GRADE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& DAILY_SHOP_PRICE_INC_PERCENT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = float> static R SPAWN_OFFSET(bool offset) {
		return ((R (*)(void *, bool))(Il2CppBase() + 0xE29450))(0, offset);
	}
	template <typename R = int32_t> static R VECTOR_FIELD_BORDER(bool offset, bool oneCellWorld) {
		return ((R (*)(void *, bool, bool))(Il2CppBase() + 0xE29464))(0, offset, oneCellWorld);
	}
	template <typename R = float> static R LEAVE_GAP(bool offset) {
		return ((R (*)(void *, bool))(Il2CppBase() + 0xE29484))(0, offset);
	}
	template <typename R = int64_t> static R get_GUILD_QUESTS_DAY_UNAVAILABLE_TIME() {
		return ((R (*)(void *))(Il2CppBase() + 0xE29498))(0);
	}
	template <typename R = int32_t> static R get_GUILD_QUESTS_FOR_DIFFICULTY_COUNT() {
		return ((R (*)(void *))(Il2CppBase() + 0xE295A4))(0);
	}
	template <typename R = int32_t> static R GetSkipPrice(float floatSeconds, Rarity rarity, SkipType skipType) {
		return ((R (*)(void *, float, Rarity, SkipType))(Il2CppBase() + 0xE29618))(0, floatSeconds, rarity, skipType);
	}
	template <typename R = int32_t> static R GetRepairTaxSilver(ItemEntity* item) {
		return ((R (*)(void *, ItemEntity*))(Il2CppBase() + 0xE298E4))(0, item);
	}
	template <typename R = Il2CppString*> static R GetCupTag(PlayerClassProgress progressType) {
		return ((R (*)(void *, PlayerClassProgress))(Il2CppBase() + 0xE29A14))(0, progressType);
	}
	template <typename R = Il2CppString*> static R GetStartWeapon(Il2CppString* className) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0xE29A8C))(0, className);
	}
	template <typename R = int64_t> static R GetDayDurationTicks() {
		return ((R (*)(void *))(Il2CppBase() + 0xE29B98))(0);
	}
	template <typename R = uintptr_t> static R GetDayOfWeek(int64_t now) {
		return ((R (*)(void *, int64_t))(Il2CppBase() + 0xE29C40))(0, now);
	}
	template <typename R = int64_t> static R GetNextDailyTime(int64_t now) {
		return ((R (*)(void *, int64_t))(Il2CppBase() + 0xE29E0C))(0, now);
	}
	template <typename R = int64_t> static R GetStartDailyTime(int64_t now) {
		return ((R (*)(void *, int64_t))(Il2CppBase() + 0xE29FA4))(0, now);
	}
	template <typename R = int64_t> static R GetNextWeeklyTime(int64_t now) {
		return ((R (*)(void *, int64_t))(Il2CppBase() + 0xE2A124))(0, now);
	}
	template <typename R = int64_t> static R GetStartWeeklyTime(int64_t now) {
		return ((R (*)(void *, int64_t))(Il2CppBase() + 0xE29D28))(0, now);
	}
	template <typename R = int64_t> static R GetNextCustomTime(int64_t now, int32_t circleDurationHour, int32_t offsetHour, int32_t reverseOffsetHour) {
		return ((R (*)(void *, int64_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0xE2A418))(0, now, circleDurationHour, offsetHour, reverseOffsetHour);
	}
	template <typename R = int64_t> static R GetStartCustomTime(int64_t now, int32_t circleDurationHour, int32_t offsetHour, int32_t reverseOffsetHour) {
		return ((R (*)(void *, int64_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0xE2A540))(0, now, circleDurationHour, offsetHour, reverseOffsetHour);
	}
	template <typename R = int64_t> static R GetNextGuildTournamentTime(int64_t now, ConfigFromServer configFromServer) {
		return ((R (*)(void *, int64_t, ConfigFromServer))(Il2CppBase() + 0xE2A65C))(0, now, configFromServer);
	}
	template <typename R = int64_t> static R GetStartGuildTournamentTime(int64_t now, ConfigFromServer configFromServer) {
		return ((R (*)(void *, int64_t, ConfigFromServer))(Il2CppBase() + 0xE2A6DC))(0, now, configFromServer);
	}
	template <typename R = int64_t> static R GetNextRestGuildTournamentTime(int64_t now, ConfigFromServer configFromServer) {
		return ((R (*)(void *, int64_t, ConfigFromServer))(Il2CppBase() + 0xE2A75C))(0, now, configFromServer);
	}
	template <typename R = int64_t> static R ToUnixTime(uintptr_t date) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0xE2A810))(0, date);
	}
	template <typename R = int64_t> static R GetCircleStartTime(int64_t nowTicks, int32_t circleDuration, int32_t offset, int32_t reverseOffset) {
		return ((R (*)(void *, int64_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0xE2A2BC))(0, nowTicks, circleDuration, offset, reverseOffset);
	}
	template <typename R = int64_t> static R GetCircleEndTime(int64_t nowTicks, int32_t circleDuration, int32_t offset, int32_t reverseOffset) {
		return ((R (*)(void *, int64_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0xE2A21C))(0, nowTicks, circleDuration, offset, reverseOffset);
	}

};

