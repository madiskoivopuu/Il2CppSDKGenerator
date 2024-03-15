#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServerChatMessageData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerChatMessageData"));
	}

	template <typename R = int64_t> R& From() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& PlayerName() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& Text() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int64_t> R& Tick() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Channels() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<MessagePayload*>*> R& Payload() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ServerChatMessageData*, uintptr_t))(Il2CppBase() + 0x1365F74))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ServerChatMessageData*, uintptr_t))(Il2CppBase() + 0x1366168))(this, reader);
	}
	template <typename R = void> R PayloadEntrySerialize(uintptr_t writer, MessagePayload* p) {
		return ((R (*)(ServerChatMessageData*, uintptr_t, MessagePayload*))(Il2CppBase() + 0x1366084))(this, writer, p);
	}
	template <typename R = Il2CppString*> R TryDeserializePayloadEntry(uintptr_t reader, uintptr_t* result) {
		return ((R (*)(ServerChatMessageData*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1366464))(this, reader, result);
	}

};

