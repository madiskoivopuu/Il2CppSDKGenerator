#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildInviteEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildInviteEntity"));
	}


	template <typename R = FromPlayerComponent*> R get_fromPlayer() {
		return ((R (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2E380))(this);
	}
	template <typename R = bool> R get_hasFromPlayer() {
		return ((R (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2E408))(this);
	}
	template <typename R = void> R AddFromPlayer(int64_t newId) {
		return ((R (*)(GuildInviteEntity*, int64_t))(Il2CppBase() + 0x1B2E414))(this, newId);
	}
	template <typename R = void> R ReplaceFromPlayer(int64_t newId) {
		return ((R (*)(GuildInviteEntity*, int64_t))(Il2CppBase() + 0x1B2E518))(this, newId);
	}
	template <typename R = void> R RemoveFromPlayer() {
		return ((R (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2E61C))(this);
	}
	template <typename R = GuildComponent*> R get_guild() {
		return ((R (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2805C))(this);
	}
	template <typename R = bool> R get_hasGuild() {
		return ((R (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B28DD4))(this);
	}
	template <typename R = void> R AddGuild(int64_t newId) {
		return ((R (*)(GuildInviteEntity*, int64_t))(Il2CppBase() + 0x1B2E628))(this, newId);
	}
	template <typename R = void> R ReplaceGuild(int64_t newId) {
		return ((R (*)(GuildInviteEntity*, int64_t))(Il2CppBase() + 0x1B2E72C))(this, newId);
	}
	template <typename R = void> R RemoveGuild() {
		return ((R (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2E830))(this);
	}
	template <typename R = InviteComponent*> R get_invite() {
		return ((R (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B29304))(this);
	}
	template <typename R = bool> R get_hasInvite() {
		return ((R (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2E83C))(this);
	}
	template <typename R = void> R AddInvite(int64_t newId) {
		return ((R (*)(GuildInviteEntity*, int64_t))(Il2CppBase() + 0x1B2C6C0))(this, newId);
	}
	template <typename R = void> R ReplaceInvite(int64_t newId) {
		return ((R (*)(GuildInviteEntity*, int64_t))(Il2CppBase() + 0x1B2E848))(this, newId);
	}
	template <typename R = void> R RemoveInvite() {
		return ((R (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2E94C))(this);
	}
	template <typename R = MessageComponent*> R get_message() {
		return ((R (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2E958))(this);
	}
	template <typename R = bool> R get_hasMessage() {
		return ((R (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2E9E0))(this);
	}
	template <typename R = void> R AddMessage(Il2CppString* newValue) {
		return ((R (*)(GuildInviteEntity*, Il2CppString*))(Il2CppBase() + 0x1B2E9EC))(this, newValue);
	}
	template <typename R = void> R ReplaceMessage(Il2CppString* newValue) {
		return ((R (*)(GuildInviteEntity*, Il2CppString*))(Il2CppBase() + 0x1B2EB00))(this, newValue);
	}
	template <typename R = void> R RemoveMessage() {
		return ((R (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2EC14))(this);
	}
	template <typename R = TickComponent*> R get_tick() {
		return ((R (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B28DE0))(this);
	}
	template <typename R = bool> R get_hasTick() {
		return ((R (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2EC20))(this);
	}
	template <typename R = void> R AddTick(int64_t newValue) {
		return ((R (*)(GuildInviteEntity*, int64_t))(Il2CppBase() + 0x1B2EC2C))(this, newValue);
	}
	template <typename R = void> R ReplaceTick(int64_t newValue) {
		return ((R (*)(GuildInviteEntity*, int64_t))(Il2CppBase() + 0x1B2ED30))(this, newValue);
	}
	template <typename R = void> R RemoveTick() {
		return ((R (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2EE34))(this);
	}
	template <typename R = ToPlayerComponent*> R get_toPlayer() {
		return ((R (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2EE40))(this);
	}
	template <typename R = bool> R get_hasToPlayer() {
		return ((R (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2EEC8))(this);
	}
	template <typename R = void> R AddToPlayer(int64_t newId) {
		return ((R (*)(GuildInviteEntity*, int64_t))(Il2CppBase() + 0x1B2EED4))(this, newId);
	}
	template <typename R = void> R ReplaceToPlayer(int64_t newId) {
		return ((R (*)(GuildInviteEntity*, int64_t))(Il2CppBase() + 0x1B2EFD8))(this, newId);
	}
	template <typename R = void> R RemoveToPlayer() {
		return ((R (*)(GuildInviteEntity*))(Il2CppBase() + 0x1B2F0DC))(this);
	}

};

