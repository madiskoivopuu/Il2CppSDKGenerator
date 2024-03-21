#pragma once

#include "../mscorlib/System/Object.h"

class ChatRoom*;

class ChatDataComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatDataComponent"));
	}

	bool& IsRegistered() {
		return *(bool*)((uintptr_t)this + 0x10);
	}

	Il2CppString*& Login() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

	Il2CppString*& Password() {
		return *(Il2CppString**)((uintptr_t)this + 0x20);
	}

	Il2CppString*& SelectedRoom() {
		return *(Il2CppString**)((uintptr_t)this + 0x28);
	}

	Il2CppList<ChatRoom*>*& Rooms() {
		return *(Il2CppList<ChatRoom*>**)((uintptr_t)this + 0x30);
	}

	int64_t& BannedTill() {
		return *(int64_t*)((uintptr_t)this + 0x38);
	}

};};
