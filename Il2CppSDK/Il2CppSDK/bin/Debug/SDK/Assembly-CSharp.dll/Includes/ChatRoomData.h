#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatRoomData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatRoomData"));
	}

	template <typename R = Il2CppString*> R& Jid() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int64_t> R& LastActivityTicks() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = Il2CppString*> R get_Jid() {
		return ((R (*)(ChatRoomData*))(Il2CppBase() + 0x17361F4))(this);
	}
	template <typename R = int64_t> R get_LastActivityTicks() {
		return ((R (*)(ChatRoomData*))(Il2CppBase() + 0x17361FC))(this);
	}
	template <typename R = void> R set_LastActivityTicks(int64_t value) {
		return ((R (*)(ChatRoomData*, int64_t))(Il2CppBase() + 0x1736204))(this, value);
	}
	template <typename R = void> R UpdateActivity(int64_t ticks) {
		return ((R (*)(ChatRoomData*, int64_t))(Il2CppBase() + 0x1736254))(this, ticks);
	}

};

