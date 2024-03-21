#pragma once

#include "../mscorlib/System/ValueType.h"


class ServerChatMessageData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerChatMessageData"));
	}

	int64_t& From() {
		return *(int64_t*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& PlayerName() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	Il2CppString*& Text() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

	int64_t& Tick() {
		return *(int64_t*)((uintptr_t)this + 0x18);
	}

	Il2CppArray<Il2CppString*>*& Channels() {
		return *(Il2CppArray<Il2CppString*>**)((uintptr_t)this + 0x20);
	}

	Il2CppArray<MessagePayload>*& Payload() {
		return *(Il2CppArray<MessagePayload>**)((uintptr_t)this + 0x28);
	}

};};
