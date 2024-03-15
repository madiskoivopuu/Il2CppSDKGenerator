#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatEntity"));
	}

	template <typename R = ChatComponent*> static R& chatComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = GroupChatComponent*> static R& groupChatComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename R = ChannelsComponent*> R get_channels() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F0748))(this);
	}
	template <typename R = bool> R get_hasChannels() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F355C))(this);
	}
	template <typename R = void> R AddChannels(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ChatEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x13F3568))(this, newNames);
	}
	template <typename R = void> R ReplaceChannels(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ChatEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x13F367C))(this, newNames);
	}
	template <typename R = void> R RemoveChannels() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F3790))(this);
	}
	template <typename R = bool> R get_isChat() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F379C))(this);
	}
	template <typename R = void> R set_isChat(bool value) {
		return ((R (*)(ChatEntity*, bool))(Il2CppBase() + 0x13F37A8))(this, value);
	}
	template <typename R = FromComponent*> R get_from() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F38C0))(this);
	}
	template <typename R = bool> R get_hasFrom() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F3948))(this);
	}
	template <typename R = void> R AddFrom(Il2CppString* newValue) {
		return ((R (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F3954))(this, newValue);
	}
	template <typename R = void> R ReplaceFrom(Il2CppString* newValue) {
		return ((R (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F3A68))(this, newValue);
	}
	template <typename R = void> R RemoveFrom() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F3B7C))(this);
	}
	template <typename R = bool> R get_isGroupChat() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F3B88))(this);
	}
	template <typename R = void> R set_isGroupChat(bool value) {
		return ((R (*)(ChatEntity*, bool))(Il2CppBase() + 0x13F3B94))(this, value);
	}
	template <typename R = GuildBossNameComponent*> R get_guildBossName() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F3CAC))(this);
	}
	template <typename R = bool> R get_hasGuildBossName() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F3D34))(this);
	}
	template <typename R = void> R AddGuildBossName(Il2CppString* newValue) {
		return ((R (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F3D40))(this, newValue);
	}
	template <typename R = void> R ReplaceGuildBossName(Il2CppString* newValue) {
		return ((R (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F3E54))(this, newValue);
	}
	template <typename R = void> R RemoveGuildBossName() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F3F68))(this);
	}
	template <typename R = GuildDailyMessageComponent*> R get_guildDailyMessage() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F3F74))(this);
	}
	template <typename R = bool> R get_hasGuildDailyMessage() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F3FFC))(this);
	}
	template <typename R = void> R AddGuildDailyMessage(Il2CppString* newValue) {
		return ((R (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F4008))(this, newValue);
	}
	template <typename R = void> R ReplaceGuildDailyMessage(Il2CppString* newValue) {
		return ((R (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F411C))(this, newValue);
	}
	template <typename R = void> R RemoveGuildDailyMessage() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F4230))(this);
	}
	template <typename R = GuildEventTypeComponent*> R get_guildEventType() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F423C))(this);
	}
	template <typename R = bool> R get_hasGuildEventType() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F42C4))(this);
	}
	template <typename R = void> R AddGuildEventType(ProtoModels::GuildEventType* newValue) {
		return ((R (*)(ChatEntity*, ProtoModels::GuildEventType*))(Il2CppBase() + 0x13F42D0))(this, newValue);
	}
	template <typename R = void> R ReplaceGuildEventType(ProtoModels::GuildEventType* newValue) {
		return ((R (*)(ChatEntity*, ProtoModels::GuildEventType*))(Il2CppBase() + 0x13F43D4))(this, newValue);
	}
	template <typename R = void> R RemoveGuildEventType() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F44D8))(this);
	}
	template <typename R = GuildPlayerNameComponent*> R get_guildPlayerName() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F44E4))(this);
	}
	template <typename R = bool> R get_hasGuildPlayerName() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F456C))(this);
	}
	template <typename R = void> R AddGuildPlayerName(Il2CppString* newValue) {
		return ((R (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F4578))(this, newValue);
	}
	template <typename R = void> R ReplaceGuildPlayerName(Il2CppString* newValue) {
		return ((R (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F468C))(this, newValue);
	}
	template <typename R = void> R RemoveGuildPlayerName() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F47A0))(this);
	}
	template <typename R = GuildQuestNameComponent*> R get_guildQuestName() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F47AC))(this);
	}
	template <typename R = bool> R get_hasGuildQuestName() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F4834))(this);
	}
	template <typename R = void> R AddGuildQuestName(Il2CppString* newValue) {
		return ((R (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F4840))(this, newValue);
	}
	template <typename R = void> R ReplaceGuildQuestName(Il2CppString* newValue) {
		return ((R (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F4954))(this, newValue);
	}
	template <typename R = void> R RemoveGuildQuestName() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F4A68))(this);
	}
	template <typename R = GuildRandomMessageComponent*> R get_guildRandomMessage() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F4A74))(this);
	}
	template <typename R = bool> R get_hasGuildRandomMessage() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F4AFC))(this);
	}
	template <typename R = void> R AddGuildRandomMessage(Il2CppString* newValue) {
		return ((R (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F4B08))(this, newValue);
	}
	template <typename R = void> R ReplaceGuildRandomMessage(Il2CppString* newValue) {
		return ((R (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F4C1C))(this, newValue);
	}
	template <typename R = void> R RemoveGuildRandomMessage() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F4D30))(this);
	}
	template <typename R = GuildRoleComponent*> R get_guildRole() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F4D3C))(this);
	}
	template <typename R = bool> R get_hasGuildRole() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F4DC4))(this);
	}
	template <typename R = void> R AddGuildRole(GuildRole* newType) {
		return ((R (*)(ChatEntity*, GuildRole*))(Il2CppBase() + 0x13F4DD0))(this, newType);
	}
	template <typename R = void> R ReplaceGuildRole(GuildRole* newType) {
		return ((R (*)(ChatEntity*, GuildRole*))(Il2CppBase() + 0x13F4ED4))(this, newType);
	}
	template <typename R = void> R RemoveGuildRole() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F4FD8))(this);
	}
	template <typename R = GuildWeeklyRankComponent*> R get_guildWeeklyRank() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F4FE4))(this);
	}
	template <typename R = bool> R get_hasGuildWeeklyRank() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F506C))(this);
	}
	template <typename R = void> R AddGuildWeeklyRank(int32_t newValue) {
		return ((R (*)(ChatEntity*, int32_t))(Il2CppBase() + 0x13F5078))(this, newValue);
	}
	template <typename R = void> R ReplaceGuildWeeklyRank(int32_t newValue) {
		return ((R (*)(ChatEntity*, int32_t))(Il2CppBase() + 0x13F517C))(this, newValue);
	}
	template <typename R = void> R RemoveGuildWeeklyRank() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F5280))(this);
	}
	template <typename R = MessageViewComponent*> R get_messageView() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F528C))(this);
	}
	template <typename R = bool> R get_hasMessageView() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F5314))(this);
	}
	template <typename R = void> R AddMessageView(ChatMessageView* newView) {
		return ((R (*)(ChatEntity*, ChatMessageView*))(Il2CppBase() + 0x13F5320))(this, newView);
	}
	template <typename R = void> R ReplaceMessageView(ChatMessageView* newView) {
		return ((R (*)(ChatEntity*, ChatMessageView*))(Il2CppBase() + 0x13F5434))(this, newView);
	}
	template <typename R = void> R RemoveMessageView() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F5548))(this);
	}
	template <typename R = PlayerIdComponent*> R get_playerId() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F5554))(this);
	}
	template <typename R = bool> R get_hasPlayerId() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F55DC))(this);
	}
	template <typename R = void> R AddPlayerId(int64_t newValue) {
		return ((R (*)(ChatEntity*, int64_t))(Il2CppBase() + 0x13F55E8))(this, newValue);
	}
	template <typename R = void> R ReplacePlayerId(int64_t newValue) {
		return ((R (*)(ChatEntity*, int64_t))(Il2CppBase() + 0x13F56EC))(this, newValue);
	}
	template <typename R = void> R RemovePlayerId() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F57F0))(this);
	}
	template <typename R = PlayerNameComponent*> R get_playerName() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F57FC))(this);
	}
	template <typename R = bool> R get_hasPlayerName() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F5884))(this);
	}
	template <typename R = void> R AddPlayerName(Il2CppString* newValue) {
		return ((R (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F5890))(this, newValue);
	}
	template <typename R = void> R ReplacePlayerName(Il2CppString* newValue) {
		return ((R (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F59A4))(this, newValue);
	}
	template <typename R = void> R RemovePlayerName() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F5AB8))(this);
	}
	template <typename R = TextComponent*> R get_text() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F5AC4))(this);
	}
	template <typename R = bool> R get_hasText() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F5B4C))(this);
	}
	template <typename R = void> R AddText(Il2CppString* newValue) {
		return ((R (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F5B58))(this, newValue);
	}
	template <typename R = void> R ReplaceText(Il2CppString* newValue) {
		return ((R (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F5C6C))(this, newValue);
	}
	template <typename R = void> R RemoveText() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F5D80))(this);
	}
	template <typename R = TickComponent*> R get_tick() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F06C0))(this);
	}
	template <typename R = bool> R get_hasTick() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F5D8C))(this);
	}
	template <typename R = void> R AddTick(int64_t newValue) {
		return ((R (*)(ChatEntity*, int64_t))(Il2CppBase() + 0x13F5D98))(this, newValue);
	}
	template <typename R = void> R ReplaceTick(int64_t newValue) {
		return ((R (*)(ChatEntity*, int64_t))(Il2CppBase() + 0x13F5E9C))(this, newValue);
	}
	template <typename R = void> R RemoveTick() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F5FA0))(this);
	}
	template <typename R = ToComponent*> R get_to() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F5FAC))(this);
	}
	template <typename R = bool> R get_hasTo() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F6034))(this);
	}
	template <typename R = void> R AddTo(Il2CppString* newValue) {
		return ((R (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F6040))(this, newValue);
	}
	template <typename R = void> R ReplaceTo(Il2CppString* newValue) {
		return ((R (*)(ChatEntity*, Il2CppString*))(Il2CppBase() + 0x13F6154))(this, newValue);
	}
	template <typename R = void> R RemoveTo() {
		return ((R (*)(ChatEntity*))(Il2CppBase() + 0x13F6268))(this);
	}

};

