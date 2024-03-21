#pragma once

#include "../mscorlib/System/ValueType.h"


class SendGuildInviteData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SendGuildInviteData"));
	}

	int64_t& PlayerId() {
		return *(int64_t*)((uintptr_t)this + 0x0);
	}

	int64_t& GuildId() {
		return *(int64_t*)((uintptr_t)this + 0x8);
	}

	Il2CppString*& Text() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

};};
