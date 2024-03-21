#pragma once

#include "../mscorlib/System/ValueType.h"


class GuildJoinResultReceiveData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildJoinResultReceiveData"));
	}

	int64_t& MessageId() {
		return *(int64_t*)((uintptr_t)this + 0x0);
	}

};};
