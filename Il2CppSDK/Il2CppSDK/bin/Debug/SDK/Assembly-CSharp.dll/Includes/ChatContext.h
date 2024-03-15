#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Context1.h" 
#include "ChatEntity.h" 

class ChatContext : public Context1<ChatEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatContext"));
	}

	template <typename R = int32_t> static R& MAX_MESSAGES_TO_STORE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& Channel() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& Player() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& Jid() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	 HashSet1<ChatEntity*>* GetEntitiesForChannel(Il2CppString* channelName) {
		return ((HashSet1<ChatEntity*>* (*)(ChatContext*, Il2CppString*))(Il2CppBase() + 0x13F2B20))(this, channelName);
	}
	 HashSet1<ChatEntity*>* GetEntitiesForPlayer(int64_t playerId) {
		return ((HashSet1<ChatEntity*>* (*)(ChatContext*, int64_t))(Il2CppBase() + 0x13F2BE0))(this, playerId);
	}
	 HashSet1<ChatEntity*>* GetEntitiesByJid(Il2CppString* jid) {
		return ((HashSet1<ChatEntity*>* (*)(ChatContext*, Il2CppString*))(Il2CppBase() + 0x13F2CA0))(this, jid);
	}

};

