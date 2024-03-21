#pragma once

#include "../mscorlib/System/ValueType.h"


class AcceptGuildInviteData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AcceptGuildInviteData"));
	}

	int64_t& InviteId() {
		return *(int64_t*)((uintptr_t)this + 0x0);
	}

	bool& Accept() {
		return *(bool*)((uintptr_t)this + 0x8);
	}

};};
