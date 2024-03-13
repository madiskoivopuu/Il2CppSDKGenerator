#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildInviteEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildInviteEntity"));
	}


	template <typename T = FromPlayerComponent*> T get_fromPlayer() {
		return ((T (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2E380))(this);
	}
	template <typename T = bool> T get_hasFromPlayer() {
		return ((T (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2E408))(this);
	}
	template <typename T = void> T AddFromPlayer(int64_t newId) {
		return ((T (*)(GuildInviteEntity*, int64_t))(Il2CppBase() + 0x1B2E414))(this, newId);
	}
	template <typename T = void> T ReplaceFromPlayer(int64_t newId) {
		return ((T (*)(GuildInviteEntity*, int64_t))(Il2CppBase() + 0x1B2E518))(this, newId);
	}
	template <typename T = void> T RemoveFromPlayer() {
		return ((T (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2E61C))(this);
	}
	template <typename T = GuildComponent*> T get_guild() {
		return ((T (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2805C))(this);
	}
	template <typename T = bool> T get_hasGuild() {
		return ((T (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B28DD4))(this);
	}
	template <typename T = void> T AddGuild(int64_t newId) {
		return ((T (*)(GuildInviteEntity*, int64_t))(Il2CppBase() + 0x1B2E628))(this, newId);
	}
	template <typename T = void> T ReplaceGuild(int64_t newId) {
		return ((T (*)(GuildInviteEntity*, int64_t))(Il2CppBase() + 0x1B2E72C))(this, newId);
	}
	template <typename T = void> T RemoveGuild() {
		return ((T (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2E830))(this);
	}
	template <typename T = InviteComponent*> T get_invite() {
		return ((T (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B29304))(this);
	}
	template <typename T = bool> T get_hasInvite() {
		return ((T (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2E83C))(this);
	}
	template <typename T = void> T AddInvite(int64_t newId) {
		return ((T (*)(GuildInviteEntity*, int64_t))(Il2CppBase() + 0x1B2C6C0))(this, newId);
	}
	template <typename T = void> T ReplaceInvite(int64_t newId) {
		return ((T (*)(GuildInviteEntity*, int64_t))(Il2CppBase() + 0x1B2E848))(this, newId);
	}
	template <typename T = void> T RemoveInvite() {
		return ((T (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2E94C))(this);
	}
	template <typename T = MessageComponent*> T get_message() {
		return ((T (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2E958))(this);
	}
	template <typename T = bool> T get_hasMessage() {
		return ((T (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2E9E0))(this);
	}
	template <typename T = void> T AddMessage(Il2CppString* newValue) {
		return ((T (*)(GuildInviteEntity*, Il2CppString*))(Il2CppBase() + 0x1B2E9EC))(this, newValue);
	}
	template <typename T = void> T ReplaceMessage(Il2CppString* newValue) {
		return ((T (*)(GuildInviteEntity*, Il2CppString*))(Il2CppBase() + 0x1B2EB00))(this, newValue);
	}
	template <typename T = void> T RemoveMessage() {
		return ((T (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2EC14))(this);
	}
	template <typename T = TickComponent*> T get_tick() {
		return ((T (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B28DE0))(this);
	}
	template <typename T = bool> T get_hasTick() {
		return ((T (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2EC20))(this);
	}
	template <typename T = void> T AddTick(int64_t newValue) {
		return ((T (*)(GuildInviteEntity*, int64_t))(Il2CppBase() + 0x1B2EC2C))(this, newValue);
	}
	template <typename T = void> T ReplaceTick(int64_t newValue) {
		return ((T (*)(GuildInviteEntity*, int64_t))(Il2CppBase() + 0x1B2ED30))(this, newValue);
	}
	template <typename T = void> T RemoveTick() {
		return ((T (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2EE34))(this);
	}
	template <typename T = ToPlayerComponent*> T get_toPlayer() {
		return ((T (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2EE40))(this);
	}
	template <typename T = bool> T get_hasToPlayer() {
		return ((T (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2EEC8))(this);
	}
	template <typename T = void> T AddToPlayer(int64_t newId) {
		return ((T (*)(GuildInviteEntity*, int64_t))(Il2CppBase() + 0x1B2EED4))(this, newId);
	}
	template <typename T = void> T ReplaceToPlayer(int64_t newId) {
		return ((T (*)(GuildInviteEntity*, int64_t))(Il2CppBase() + 0x1B2EFD8))(this, newId);
	}
	template <typename T = void> T RemoveToPlayer() {
		return ((T (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2F0DC))(this);
	}

};

