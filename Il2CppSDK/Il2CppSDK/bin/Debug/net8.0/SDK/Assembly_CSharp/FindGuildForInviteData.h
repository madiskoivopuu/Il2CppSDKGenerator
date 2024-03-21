#pragma once

#include "../mscorlib/System/ValueType.h"


class FindGuildForInviteData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FindGuildForInviteData"));
	}

	Il2CppString*& GuildTag() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

	Il2CppString*& GuildName() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

};};
