#pragma once

#include "../mscorlib/System/ValueType.h"


class GuildDailyMessageData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildDailyMessageData"));
	}

	uint8_t& Type() {
		return *(uint8_t*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& Text() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

};};
