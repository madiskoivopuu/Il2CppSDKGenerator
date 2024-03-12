#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatHelper"));
	}


	template <typename T = uintptr_t> static T AddEntity(uintptr_t context, uintptr_t message) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x13F673C))(0, context, message);
	}
	template <typename T = uintptr_t> static T OnMessage(uintptr_t context, uintptr_t message) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x13F681C))(0, context, message);
	}
	template <typename T = uintptr_t> static T OnMessage_1(uintptr_t context, uintptr_t message) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x13F6B34))(0, context, message);
	}
	template <typename T = uintptr_t> static T OnMessage_2(uintptr_t context, uintptr_t message) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x13F6D8C))(0, context, message);
	}
	template <typename T = uintptr_t> static T ShowSystemMessage(uintptr_t context, int64_t currentWorldTimeInTicks, Il2CppString* message, Il2CppString* jid, Il2CppArray<uintptr_t>* channels) {
		return ((T (*)(void *, uintptr_t, int64_t, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x13F6F58))(0, context, currentWorldTimeInTicks, message, jid, channels);
	}
	template <typename T = bool> static T IsValidMessage(uintptr_t context, int64_t playerId, Il2CppString* newMessage, Il2CppString* jid, Il2CppString* channel) {
		return ((T (*)(void *, uintptr_t, int64_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13F705C))(0, context, playerId, newMessage, jid, channel);
	}
	template <typename T = void> static T ShowPlayerUnreachableMessage(uintptr_t context, Il2CppString* jid, Il2CppString* channel) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x13F7AA0))(0, context, jid, channel);
	}
	template <typename T = bool> static T IsSpamMessage(void* ownMessages, Il2CppString* newMessage, int64_t currentWorldTimeInTicks) {
		return ((T (*)(void *, void*, Il2CppString*, int64_t))(Il2CppBase() + 0x13F783C))(0, ownMessages, newMessage, currentWorldTimeInTicks);
	}
	template <typename T = bool> static T IsOftenMessage(void* ownMessages, int64_t currentWorldTimeInTicks) {
		return ((T (*)(void *, void*, int64_t))(Il2CppBase() + 0x13F7748))(0, ownMessages, currentWorldTimeInTicks);
	}
	template <typename T = bool> static T ContainsWebSite(Il2CppString* message) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x13F796C))(0, message);
	}
	template <typename T = Il2CppString*> static T GetGuildEventTitle(uintptr_t context, uintptr_t entity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x13F7E70))(0, context, entity);
	}
	template <typename T = Il2CppString*> static T GetGuildRoleLocalizationKey(uintptr_t role) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x13F8D00))(0, role);
	}
	template <typename T = Il2CppString*> static T GetGuildEventDescription(uintptr_t context, uintptr_t entity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x13F8D9C))(0, context, entity);
	}
	template <typename T = bool> static T IsSystemMessage(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x13F904C))(0, entity);
	}
	template <typename T = Il2CppString*> static T OnMessageg__getLocalizedPayloadEntry|3_0(uintptr_t p) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x13F90D4))(0, p);
	}

};

}
