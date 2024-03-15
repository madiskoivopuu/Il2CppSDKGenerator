#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatRoomSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatRoomSystem"));
	}

	template <typename R = ICommonClientWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = UIWindowsManager*> R& _manager() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 IGroup1<AccountEntity*>*& _accounts() {
		return *(IGroup1<AccountEntity*>**)((uintptr_t)this + 0x20);
	}

	 Il2CppDictionary<Il2CppString*, ChatRoom*>* get_ConnectedRooms() {
		return ((Il2CppDictionary<Il2CppString*, ChatRoom*>* (*)(ChatRoomSystem*))(Il2CppBase() + 0x17362AC))(this);
	}
	template <typename R = void> R Initialize() {
		return ((R (*)(ChatRoomSystem*))(Il2CppBase() + 0x1736368))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(ChatRoomSystem*))(Il2CppBase() + 0x1736524))(this);
	}
	template <typename R = bool> R ProcessRoom(AccountEntity* accountEntity, Il2CppString* channel, bool clearMessages) {
		return ((R (*)(ChatRoomSystem*, AccountEntity*, Il2CppString*, bool))(Il2CppBase() + 0x1736834))(this, accountEntity, channel, clearMessages);
	}

};

