#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Context1.h" 

class ChatContext : public Context1<ChatEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatContext"));
	}

	template <typename T = int32_t> static T& MAX_MESSAGES_TO_STORE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Channel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Player() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Jid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = HashSet1ChatEntity*>*> T GetEntitiesForChannel(Il2CppString* channelName) {
		return ((T (*)(ChatContext*, Il2CppString*))(Il2CppBase() + 0x13F2B20))(this, channelName);
	}
	template <typename T = HashSet1ChatEntity*>*> T GetEntitiesForPlayer(int64_t playerId) {
		return ((T (*)(ChatContext*, int64_t))(Il2CppBase() + 0x13F2BE0))(this, playerId);
	}
	template <typename T = HashSet1ChatEntity*>*> T GetEntitiesByJid(Il2CppString* jid) {
		return ((T (*)(ChatContext*, Il2CppString*))(Il2CppBase() + 0x13F2CA0))(this, jid);
	}

};

