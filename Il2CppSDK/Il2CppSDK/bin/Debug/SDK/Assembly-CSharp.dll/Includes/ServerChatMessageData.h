#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServerChatMessageData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerChatMessageData"));
	}

	template <typename T = int64_t> T& From() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& PlayerName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& Tick() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Channels() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Payload() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ServerChatMessageData*, uintptr_t))(Il2CppBase() + 0x1365F74))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ServerChatMessageData*, uintptr_t))(Il2CppBase() + 0x1366168))(this, reader);
	}
	template <typename T = void> T PayloadEntrySerialize(uintptr_t writer, MessagePayload* p) {
		return ((T (*)(ServerChatMessageData*, uintptr_t, MessagePayload*))(Il2CppBase() + 0x1366084))(this, writer, p);
	}
	template <typename T = Il2CppString*> T TryDeserializePayloadEntry(uintptr_t reader, uintptr_t* result) {
		return ((T (*)(ServerChatMessageData*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1366464))(this, reader, result);
	}

};

