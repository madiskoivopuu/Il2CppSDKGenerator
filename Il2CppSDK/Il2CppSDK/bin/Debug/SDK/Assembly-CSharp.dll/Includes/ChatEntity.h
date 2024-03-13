#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatEntity"));
	}

	template <typename T = ChatComponent*> static T& chatComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = GroupChatComponent*> static T& groupChatComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = ChannelsComponent*> T get_channels() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F0748))(this);
	}
	template <typename T = bool> T get_hasChannels() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F355C))(this);
	}
	template <typename T = void> T AddChannels(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ChatEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x13F3568))(this, newNames);
	}
	template <typename T = void> T ReplaceChannels(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ChatEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x13F367C))(this, newNames);
	}
	template <typename T = void> T RemoveChannels() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F3790))(this);
	}
	template <typename T = bool> T get_isChat() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F379C))(this);
	}
	template <typename T = void> T set_isChat(bool value) {
		return ((T (*)(ChatEntity*, bool))(Il2CppBase() + 0x13F37A8))(this, value);
	}
	template <typename T = FromComponent*> T get_from() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F38C0))(this);
	}
	template <typename T = bool> T get_hasFrom() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F3948))(this);
	}
	template <typename T = void> T AddFrom(Il2CppString* newValue) {
		return ((T (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F3954))(this, newValue);
	}
	template <typename T = void> T ReplaceFrom(Il2CppString* newValue) {
		return ((T (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F3A68))(this, newValue);
	}
	template <typename T = void> T RemoveFrom() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F3B7C))(this);
	}
	template <typename T = bool> T get_isGroupChat() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F3B88))(this);
	}
	template <typename T = void> T set_isGroupChat(bool value) {
		return ((T (*)(ChatEntity*, bool))(Il2CppBase() + 0x13F3B94))(this, value);
	}
	template <typename T = GuildBossNameComponent*> T get_guildBossName() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F3CAC))(this);
	}
	template <typename T = bool> T get_hasGuildBossName() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F3D34))(this);
	}
	template <typename T = void> T AddGuildBossName(Il2CppString* newValue) {
		return ((T (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F3D40))(this, newValue);
	}
	template <typename T = void> T ReplaceGuildBossName(Il2CppString* newValue) {
		return ((T (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F3E54))(this, newValue);
	}
	template <typename T = void> T RemoveGuildBossName() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F3F68))(this);
	}
	template <typename T = GuildDailyMessageComponent*> T get_guildDailyMessage() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F3F74))(this);
	}
	template <typename T = bool> T get_hasGuildDailyMessage() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F3FFC))(this);
	}
	template <typename T = void> T AddGuildDailyMessage(Il2CppString* newValue) {
		return ((T (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F4008))(this, newValue);
	}
	template <typename T = void> T ReplaceGuildDailyMessage(Il2CppString* newValue) {
		return ((T (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F411C))(this, newValue);
	}
	template <typename T = void> T RemoveGuildDailyMessage() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F4230))(this);
	}
	template <typename T = GuildEventTypeComponent*> T get_guildEventType() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F423C))(this);
	}
	template <typename T = bool> T get_hasGuildEventType() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F42C4))(this);
	}
	template <typename T = void> T AddGuildEventType(GuildEventType* newValue) {
		return ((T (*)(ChatEntity*, GuildEventType*))(Il2CppBase() + 0x13F42D0))(this, newValue);
	}
	template <typename T = void> T ReplaceGuildEventType(GuildEventType* newValue) {
		return ((T (*)(ChatEntity*, GuildEventType*))(Il2CppBase() + 0x13F43D4))(this, newValue);
	}
	template <typename T = void> T RemoveGuildEventType() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F44D8))(this);
	}
	template <typename T = GuildPlayerNameComponent*> T get_guildPlayerName() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F44E4))(this);
	}
	template <typename T = bool> T get_hasGuildPlayerName() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F456C))(this);
	}
	template <typename T = void> T AddGuildPlayerName(Il2CppString* newValue) {
		return ((T (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F4578))(this, newValue);
	}
	template <typename T = void> T ReplaceGuildPlayerName(Il2CppString* newValue) {
		return ((T (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F468C))(this, newValue);
	}
	template <typename T = void> T RemoveGuildPlayerName() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F47A0))(this);
	}
	template <typename T = GuildQuestNameComponent*> T get_guildQuestName() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F47AC))(this);
	}
	template <typename T = bool> T get_hasGuildQuestName() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F4834))(this);
	}
	template <typename T = void> T AddGuildQuestName(Il2CppString* newValue) {
		return ((T (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F4840))(this, newValue);
	}
	template <typename T = void> T ReplaceGuildQuestName(Il2CppString* newValue) {
		return ((T (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F4954))(this, newValue);
	}
	template <typename T = void> T RemoveGuildQuestName() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F4A68))(this);
	}
	template <typename T = GuildRandomMessageComponent*> T get_guildRandomMessage() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F4A74))(this);
	}
	template <typename T = bool> T get_hasGuildRandomMessage() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F4AFC))(this);
	}
	template <typename T = void> T AddGuildRandomMessage(Il2CppString* newValue) {
		return ((T (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F4B08))(this, newValue);
	}
	template <typename T = void> T ReplaceGuildRandomMessage(Il2CppString* newValue) {
		return ((T (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F4C1C))(this, newValue);
	}
	template <typename T = void> T RemoveGuildRandomMessage() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F4D30))(this);
	}
	template <typename T = GuildRoleComponent*> T get_guildRole() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F4D3C))(this);
	}
	template <typename T = bool> T get_hasGuildRole() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F4DC4))(this);
	}
	template <typename T = void> T AddGuildRole(GuildRole* newType) {
		return ((T (*)(ChatEntity*, GuildRole*))(Il2CppBase() + 0x13F4DD0))(this, newType);
	}
	template <typename T = void> T ReplaceGuildRole(GuildRole* newType) {
		return ((T (*)(ChatEntity*, GuildRole*))(Il2CppBase() + 0x13F4ED4))(this, newType);
	}
	template <typename T = void> T RemoveGuildRole() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F4FD8))(this);
	}
	template <typename T = GuildWeeklyRankComponent*> T get_guildWeeklyRank() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F4FE4))(this);
	}
	template <typename T = bool> T get_hasGuildWeeklyRank() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F506C))(this);
	}
	template <typename T = void> T AddGuildWeeklyRank(int32_t newValue) {
		return ((T (*)(ChatEntity*, int32_t))(Il2CppBase() + 0x13F5078))(this, newValue);
	}
	template <typename T = void> T ReplaceGuildWeeklyRank(int32_t newValue) {
		return ((T (*)(ChatEntity*, int32_t))(Il2CppBase() + 0x13F517C))(this, newValue);
	}
	template <typename T = void> T RemoveGuildWeeklyRank() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F5280))(this);
	}
	template <typename T = MessageViewComponent*> T get_messageView() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F528C))(this);
	}
	template <typename T = bool> T get_hasMessageView() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F5314))(this);
	}
	template <typename T = void> T AddMessageView(ChatMessageView* newView) {
		return ((T (*)(ChatEntity*, ChatMessageView*))(Il2CppBase() + 0x13F5320))(this, newView);
	}
	template <typename T = void> T ReplaceMessageView(ChatMessageView* newView) {
		return ((T (*)(ChatEntity*, ChatMessageView*))(Il2CppBase() + 0x13F5434))(this, newView);
	}
	template <typename T = void> T RemoveMessageView() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F5548))(this);
	}
	template <typename T = PlayerIdComponent*> T get_playerId() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F5554))(this);
	}
	template <typename T = bool> T get_hasPlayerId() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F55DC))(this);
	}
	template <typename T = void> T AddPlayerId(int64_t newValue) {
		return ((T (*)(ChatEntity*, int64_t))(Il2CppBase() + 0x13F55E8))(this, newValue);
	}
	template <typename T = void> T ReplacePlayerId(int64_t newValue) {
		return ((T (*)(ChatEntity*, int64_t))(Il2CppBase() + 0x13F56EC))(this, newValue);
	}
	template <typename T = void> T RemovePlayerId() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F57F0))(this);
	}
	template <typename T = PlayerNameComponent*> T get_playerName() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F57FC))(this);
	}
	template <typename T = bool> T get_hasPlayerName() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F5884))(this);
	}
	template <typename T = void> T AddPlayerName(Il2CppString* newValue) {
		return ((T (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F5890))(this, newValue);
	}
	template <typename T = void> T ReplacePlayerName(Il2CppString* newValue) {
		return ((T (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F59A4))(this, newValue);
	}
	template <typename T = void> T RemovePlayerName() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F5AB8))(this);
	}
	template <typename T = TextComponent*> T get_text() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F5AC4))(this);
	}
	template <typename T = bool> T get_hasText() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F5B4C))(this);
	}
	template <typename T = void> T AddText(Il2CppString* newValue) {
		return ((T (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F5B58))(this, newValue);
	}
	template <typename T = void> T ReplaceText(Il2CppString* newValue) {
		return ((T (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F5C6C))(this, newValue);
	}
	template <typename T = void> T RemoveText() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F5D80))(this);
	}
	template <typename T = TickComponent*> T get_tick() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F06C0))(this);
	}
	template <typename T = bool> T get_hasTick() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F5D8C))(this);
	}
	template <typename T = void> T AddTick(int64_t newValue) {
		return ((T (*)(ChatEntity*, int64_t))(Il2CppBase() + 0x13F5D98))(this, newValue);
	}
	template <typename T = void> T ReplaceTick(int64_t newValue) {
		return ((T (*)(ChatEntity*, int64_t))(Il2CppBase() + 0x13F5E9C))(this, newValue);
	}
	template <typename T = void> T RemoveTick() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F5FA0))(this);
	}
	template <typename T = ToComponent*> T get_to() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F5FAC))(this);
	}
	template <typename T = bool> T get_hasTo() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F6034))(this);
	}
	template <typename T = void> T AddTo(Il2CppString* newValue) {
		return ((T (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F6040))(this, newValue);
	}
	template <typename T = void> T ReplaceTo(Il2CppString* newValue) {
		return ((T (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F6154))(this, newValue);
	}
	template <typename T = void> T RemoveTo() {
		return ((T (*)(ChatEntity*))(Il2CppBase() + 0x13F6268))(this);
	}

};

