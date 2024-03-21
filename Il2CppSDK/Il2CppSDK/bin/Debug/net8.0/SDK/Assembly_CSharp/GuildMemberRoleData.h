#pragma once

#include "../mscorlib/System/ValueType.h"
#include "GuildRole.h"


class GuildMemberRoleData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildMemberRoleData"));
	}

	int64_t& TargetPlayerId() {
		return *(int64_t*)((uintptr_t)this + 0x0);
	}

	GuildRole& Role() {
		return *(GuildRole*)((uintptr_t)this + 0x8);
	}

};};
