#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatRoomSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatRoomSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _manager() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& _accounts() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T get_ConnectedRooms() {
		return ((T (*)(ChatRoomSystem*))(Il2CppBase() + 0x17362AC))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(ChatRoomSystem*))(Il2CppBase() + 0x1736368))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(ChatRoomSystem*))(Il2CppBase() + 0x1736524))(this);
	}
	template <typename T = bool> T ProcessRoom(uintptr_t accountEntity, Il2CppString* channel, bool clearMessages) {
		return ((T (*)(ChatRoomSystem*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x1736834))(this, accountEntity, channel, clearMessages);
	}

};

}
