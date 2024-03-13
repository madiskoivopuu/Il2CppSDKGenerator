#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildEventMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildEventMessage"));
	}


	template <typename T = Il2CppString*> T get_PlayerId() {
		return ((T (*)(GuildEventMessage*))(Il2CppBase() + 0x1B23CB4))(this);
	}
	template <typename T = void> T set_PlayerId(Il2CppString* value) {
		return ((T (*)(GuildEventMessage*, Il2CppString*))(Il2CppBase() + 0x1B23870))(this, value);
	}
	template <typename T = Il2CppString*> T get_Ticks() {
		return ((T (*)(GuildEventMessage*))(Il2CppBase() + 0x1B23D04))(this);
	}
	template <typename T = void> T set_Ticks(Il2CppString* value) {
		return ((T (*)(GuildEventMessage*, Il2CppString*))(Il2CppBase() + 0x1B238D0))(this, value);
	}
	template <typename T = Il2CppString*> T get_PlayerName() {
		return ((T (*)(GuildEventMessage*))(Il2CppBase() + 0x1B23D54))(this);
	}
	template <typename T = void> T set_PlayerName(Il2CppString* value) {
		return ((T (*)(GuildEventMessage*, Il2CppString*))(Il2CppBase() + 0x1B239B4))(this, value);
	}
	template <typename T = Il2CppString*> T get_QuestName() {
		return ((T (*)(GuildEventMessage*))(Il2CppBase() + 0x1B23DA4))(this);
	}
	template <typename T = void> T set_QuestName(Il2CppString* value) {
		return ((T (*)(GuildEventMessage*, Il2CppString*))(Il2CppBase() + 0x1B23A14))(this, value);
	}
	template <typename T = int32_t> T get_GuildWeeklyRank() {
		return ((T (*)(GuildEventMessage*))(Il2CppBase() + 0x1B23DF4))(this);
	}
	template <typename T = void> T set_GuildWeeklyRank(int32_t value) {
		return ((T (*)(GuildEventMessage*, int32_t))(Il2CppBase() + 0x1B23A74))(this, value);
	}
	template <typename T = int32_t> T get_GuildMemberRole() {
		return ((T (*)(GuildEventMessage*))(Il2CppBase() + 0x1B23E44))(this);
	}
	template <typename T = void> T set_GuildMemberRole(int32_t value) {
		return ((T (*)(GuildEventMessage*, int32_t))(Il2CppBase() + 0x1B23AD4))(this, value);
	}
	template <typename T = Il2CppString*> T get_RandomMessage() {
		return ((T (*)(GuildEventMessage*))(Il2CppBase() + 0x1B23E94))(this);
	}
	template <typename T = void> T set_RandomMessage(Il2CppString* value) {
		return ((T (*)(GuildEventMessage*, Il2CppString*))(Il2CppBase() + 0x1B23B34))(this, value);
	}
	template <typename T = Il2CppString*> T get_DailyMessage() {
		return ((T (*)(GuildEventMessage*))(Il2CppBase() + 0x1B23EE4))(this);
	}
	template <typename T = void> T set_DailyMessage(Il2CppString* value) {
		return ((T (*)(GuildEventMessage*, Il2CppString*))(Il2CppBase() + 0x1B23BF4))(this, value);
	}
	template <typename T = Il2CppString*> T get_BossName() {
		return ((T (*)(GuildEventMessage*))(Il2CppBase() + 0x1B23F34))(this);
	}
	template <typename T = void> T set_BossName(Il2CppString* value) {
		return ((T (*)(GuildEventMessage*, Il2CppString*))(Il2CppBase() + 0x1B23C54))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Channels() {
		return ((T (*)(GuildEventMessage*))(Il2CppBase() + 0x1B23F84))(this);
	}
	template <typename T = void> T set_Channels(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GuildEventMessage*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B23930))(this, value);
	}
	template <typename T = int32_t> T get_EventType() {
		return ((T (*)(GuildEventMessage*))(Il2CppBase() + 0x1B24034))(this);
	}
	template <typename T = void> T set_EventType(int32_t value) {
		return ((T (*)(GuildEventMessage*, int32_t))(Il2CppBase() + 0x1B23B94))(this, value);
	}

};

