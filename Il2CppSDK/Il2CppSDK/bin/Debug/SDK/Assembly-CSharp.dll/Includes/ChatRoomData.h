#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatRoomData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatRoomData"));
	}

	template <typename T = Il2CppString*> T& Jid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& LastActivityTicks() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T get_Jid() {
		return ((T (*)(ChatRoomData*))(Il2CppBase() + 0x17361F4))(this);
	}
	template <typename T = int64_t> T get_LastActivityTicks() {
		return ((T (*)(ChatRoomData*))(Il2CppBase() + 0x17361FC))(this);
	}
	template <typename T = void> T set_LastActivityTicks(int64_t value) {
		return ((T (*)(ChatRoomData*, int64_t))(Il2CppBase() + 0x1736204))(this, value);
	}
	template <typename T = void> T UpdateActivity(int64_t ticks) {
		return ((T (*)(ChatRoomData*, int64_t))(Il2CppBase() + 0x1736254))(this, ticks);
	}

};

