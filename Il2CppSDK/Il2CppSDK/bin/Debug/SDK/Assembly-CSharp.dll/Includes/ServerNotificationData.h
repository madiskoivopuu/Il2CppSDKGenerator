#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServerNotificationData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerNotificationData"));
	}

	template <typename R = ServerNotificationType*> R& Type() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Text() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<MessagePayload*>*> R& Payload() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ServerNotificationData*, uintptr_t))(Il2CppBase() + 0x161FD5C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ServerNotificationData*, uintptr_t))(Il2CppBase() + 0x161FF38))(this, reader);
	}
	template <typename R = void> R PayloadEntrySerialize(uintptr_t writer, MessagePayload* p) {
		return ((R (*)(ServerNotificationData*, uintptr_t, MessagePayload*))(Il2CppBase() + 0x161FE54))(this, writer, p);
	}
	template <typename R = Il2CppString*> R TryDeserializePayloadEntry(uintptr_t reader, uintptr_t* result) {
		return ((R (*)(ServerNotificationData*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x16201EC))(this, reader, result);
	}

};

