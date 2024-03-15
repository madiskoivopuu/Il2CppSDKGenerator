#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatHelper"));
	}


	template <typename R = ChatEntity*> static R AddEntity(ChatContext* context, ChatMessage* message) {
		return ((R (*)(void *, ChatContext*, ChatMessage*))(Il2CppBase() + 0x13F673C))(0, context, message);
	}
	template <typename R = ChatEntity*> static R OnMessage(ChatContext* context, XMessage* message) {
		return ((R (*)(void *, ChatContext*, XMessage*))(Il2CppBase() + 0x13F681C))(0, context, message);
	}
	template <typename R = ChatEntity*> static R OnMessage_1(ChatContext* context, GuildEventMessage* message) {
		return ((R (*)(void *, ChatContext*, GuildEventMessage*))(Il2CppBase() + 0x13F6B34))(0, context, message);
	}
	template <typename R = ChatEntity*> static R OnMessage_2(ChatContext* context, ServerChatMessageData* message) {
		return ((R (*)(void *, ChatContext*, ServerChatMessageData*))(Il2CppBase() + 0x13F6D8C))(0, context, message);
	}
	template <typename R = ChatEntity*> static R ShowSystemMessage(ChatContext* context, int64_t currentWorldTimeInTicks, Il2CppString* message, Il2CppString* jid, Il2CppArray<Il2CppString*>* channels) {
		return ((R (*)(void *, ChatContext*, int64_t, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x13F6F58))(0, context, currentWorldTimeInTicks, message, jid, channels);
	}
	template <typename R = bool> static R IsValidMessage(ChatContext* context, int64_t playerId, Il2CppString* newMessage, Il2CppString* jid, Il2CppString* channel) {
		return ((R (*)(void *, ChatContext*, int64_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13F705C))(0, context, playerId, newMessage, jid, channel);
	}
	template <typename R = void> static R ShowPlayerUnreachableMessage(ChatContext* context, Il2CppString* jid, Il2CppString* channel) {
		return ((R (*)(void *, ChatContext*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13F7AA0))(0, context, jid, channel);
	}
	template <typename R = bool> static R IsSpamMessage(IEnumerable1ChatEntity*>* ownMessages, Il2CppString* newMessage, int64_t currentWorldTimeInTicks) {
		return ((R (*)(void *, IEnumerable1ChatEntity*>*, Il2CppString*, int64_t))(Il2CppBase() + 0x13F783C))(0, ownMessages, newMessage, currentWorldTimeInTicks);
	}
	template <typename R = bool> static R IsOftenMessage(IEnumerable1ChatEntity*>* ownMessages, int64_t currentWorldTimeInTicks) {
		return ((R (*)(void *, IEnumerable1ChatEntity*>*, int64_t))(Il2CppBase() + 0x13F7748))(0, ownMessages, currentWorldTimeInTicks);
	}
	template <typename R = bool> static R ContainsWebSite(Il2CppString* message) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x13F796C))(0, message);
	}
	template <typename R = Il2CppString*> static R GetGuildEventTitle(ChatContext* context, ChatEntity* entity) {
		return ((R (*)(void *, ChatContext*, ChatEntity*))(Il2CppBase() + 0x13F7E70))(0, context, entity);
	}
	template <typename R = Il2CppString*> static R GetGuildRoleLocalizationKey(GuildRole* role) {
		return ((R (*)(void *, GuildRole*))(Il2CppBase() + 0x13F8D00))(0, role);
	}
	template <typename R = Il2CppString*> static R GetGuildEventDescription(ChatContext* context, ChatEntity* entity) {
		return ((R (*)(void *, ChatContext*, ChatEntity*))(Il2CppBase() + 0x13F8D9C))(0, context, entity);
	}
	template <typename R = bool> static R IsSystemMessage(ChatEntity* entity) {
		return ((R (*)(void *, ChatEntity*))(Il2CppBase() + 0x13F904C))(0, entity);
	}
	template <typename R = Il2CppString*> static R OnMessageg__getLocalizedPayloadEntry|3_0(MessagePayload* p) {
		return ((R (*)(void *, MessagePayload*))(Il2CppBase() + 0x13F90D4))(0, p);
	}

};

