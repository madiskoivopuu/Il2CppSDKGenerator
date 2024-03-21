#pragma once

#include "../mscorlib/System/ValueType.h"


class KickGuildMemberData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KickGuildMemberData"));
	}

	int64_t& PlayerId() {
		return *(int64_t*)((uintptr_t)this + 0x0);
	}

};};
