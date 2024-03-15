#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildEventMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildEventMessage"));
	}


	template <typename R = Il2CppString*> R get_PlayerId() {
		return ((R (*)(GuildEventMessage*))(Il2CppBase() + 0x1B23CB4))(this);
	}
	template <typename R = void> R set_PlayerId(Il2CppString* value) {
		return ((R (*)(GuildEventMessage*, Il2CppString*))(Il2CppBase() + 0x1B23870))(this, value);
	}
	template <typename R = Il2CppString*> R get_Ticks() {
		return ((R (*)(GuildEventMessage*))(Il2CppBase() + 0x1B23D04))(this);
	}
	template <typename R = void> R set_Ticks(Il2CppString* value) {
		return ((R (*)(GuildEventMessage*, Il2CppString*))(Il2CppBase() + 0x1B238D0))(this, value);
	}
	template <typename R = Il2CppString*> R get_PlayerName() {
		return ((R (*)(GuildEventMessage*))(Il2CppBase() + 0x1B23D54))(this);
	}
	template <typename R = void> R set_PlayerName(Il2CppString* value) {
		return ((R (*)(GuildEventMessage*, Il2CppString*))(Il2CppBase() + 0x1B239B4))(this, value);
	}
	template <typename R = Il2CppString*> R get_QuestName() {
		return ((R (*)(GuildEventMessage*))(Il2CppBase() + 0x1B23DA4))(this);
	}
	template <typename R = void> R set_QuestName(Il2CppString* value) {
		return ((R (*)(GuildEventMessage*, Il2CppString*))(Il2CppBase() + 0x1B23A14))(this, value);
	}
	template <typename R = int32_t> R get_GuildWeeklyRank() {
		return ((R (*)(GuildEventMessage*))(Il2CppBase() + 0x1B23DF4))(this);
	}
	template <typename R = void> R set_GuildWeeklyRank(int32_t value) {
		return ((R (*)(GuildEventMessage*, int32_t))(Il2CppBase() + 0x1B23A74))(this, value);
	}
	template <typename R = int32_t> R get_GuildMemberRole() {
		return ((R (*)(GuildEventMessage*))(Il2CppBase() + 0x1B23E44))(this);
	}
	template <typename R = void> R set_GuildMemberRole(int32_t value) {
		return ((R (*)(GuildEventMessage*, int32_t))(Il2CppBase() + 0x1B23AD4))(this, value);
	}
	template <typename R = Il2CppString*> R get_RandomMessage() {
		return ((R (*)(GuildEventMessage*))(Il2CppBase() + 0x1B23E94))(this);
	}
	template <typename R = void> R set_RandomMessage(Il2CppString* value) {
		return ((R (*)(GuildEventMessage*, Il2CppString*))(Il2CppBase() + 0x1B23B34))(this, value);
	}
	template <typename R = Il2CppString*> R get_DailyMessage() {
		return ((R (*)(GuildEventMessage*))(Il2CppBase() + 0x1B23EE4))(this);
	}
	template <typename R = void> R set_DailyMessage(Il2CppString* value) {
		return ((R (*)(GuildEventMessage*, Il2CppString*))(Il2CppBase() + 0x1B23BF4))(this, value);
	}
	template <typename R = Il2CppString*> R get_BossName() {
		return ((R (*)(GuildEventMessage*))(Il2CppBase() + 0x1B23F34))(this);
	}
	template <typename R = void> R set_BossName(Il2CppString* value) {
		return ((R (*)(GuildEventMessage*, Il2CppString*))(Il2CppBase() + 0x1B23C54))(this, value);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R get_Channels() {
		return ((R (*)(GuildEventMessage*))(Il2CppBase() + 0x1B23F84))(this);
	}
	template <typename R = void> R set_Channels(Il2CppArray<Il2CppString*>* value) {
		return ((R (*)(GuildEventMessage*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1B23930))(this, value);
	}
	template <typename R = int32_t> R get_EventType() {
		return ((R (*)(GuildEventMessage*))(Il2CppBase() + 0x1B24034))(this);
	}
	template <typename R = void> R set_EventType(int32_t value) {
		return ((R (*)(GuildEventMessage*, int32_t))(Il2CppBase() + 0x1B23B94))(this, value);
	}

};

