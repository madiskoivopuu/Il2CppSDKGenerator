#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServerNotificationData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerNotificationData"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Payload() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ServerNotificationData*, uintptr_t))(Il2CppBase() + 0x161FD5C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ServerNotificationData*, uintptr_t))(Il2CppBase() + 0x161FF38))(this, reader);
	}
	template <typename T = void> T PayloadEntrySerialize(uintptr_t writer, uintptr_t p) {
		return ((T (*)(ServerNotificationData*, uintptr_t, uintptr_t))(Il2CppBase() + 0x161FE54))(this, writer, p);
	}
	template <typename T = Il2CppString*> T TryDeserializePayloadEntry(uintptr_t reader, uintptr_t* result) {
		return ((T (*)(ServerNotificationData*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x16201EC))(this, reader, result);
	}

};

}
