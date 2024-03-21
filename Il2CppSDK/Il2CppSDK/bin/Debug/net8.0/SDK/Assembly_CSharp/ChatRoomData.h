#pragma once

#include "../mscorlib/System/Object.h"


class ChatRoomData : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatRoomData"));
	}

	Il2CppString*& <Jid>k__BackingField() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

	int64_t& <LastActivityTicks>k__BackingField() {
		return *(int64_t*)((uintptr_t)this + 0x18);
	}

};};
