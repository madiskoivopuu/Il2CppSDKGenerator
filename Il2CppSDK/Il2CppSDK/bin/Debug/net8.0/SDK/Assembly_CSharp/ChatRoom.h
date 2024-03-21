#pragma once

#include "../mscorlib/System/Object.h"


class ChatRoom : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatRoom"));
	}

	Il2CppString*& Name() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

	Il2CppString*& Type() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

	int64_t& LastOpened() {
		return *(int64_t*)((uintptr_t)this + 0x20);
	}

	bool& IsHistoryEnabled() {
		return *(bool*)((uintptr_t)this + 0x28);
	}

};};
