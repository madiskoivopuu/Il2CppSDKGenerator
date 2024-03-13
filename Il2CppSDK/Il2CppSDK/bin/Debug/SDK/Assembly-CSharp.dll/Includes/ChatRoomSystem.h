#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatRoomSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatRoomSystem"));
	}

	template <typename T = ICommonClientWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = UIWindowsManager*> T& _manager() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = IGroup1AccountEntity*>*> T& _accounts() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppDictionary<Il2CppString*, ChatRoom*>*> T get_ConnectedRooms() {
		return ((T (*)(ChatRoomSystem*))(Il2CppBase() + 0x17362AC))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(ChatRoomSystem*))(Il2CppBase() + 0x1736368))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(ChatRoomSystem*))(Il2CppBase() + 0x1736524))(this);
	}
	template <typename T = bool> T ProcessRoom(AccountEntity* accountEntity, Il2CppString* channel, bool clearMessages) {
		return ((T (*)(ChatRoomSystem*, AccountEntity*, Il2CppString*, bool))(Il2CppBase() + 0x1736834))(this, accountEntity, channel, clearMessages);
	}

};

