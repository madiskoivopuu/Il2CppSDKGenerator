#pragma once

#include "../mscorlib/System/ValueType.h"


class SendClanInviteData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SendClanInviteData"));
	}

	int64_t& InvitedUserId() {
		return *(int64_t*)((uintptr_t)this + 0x0);
	}

	uint8_t& Slot() {
		return *(uint8_t*)((uintptr_t)this + 0x8);
	}

	Il2CppString*& Description() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

};};
