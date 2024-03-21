#pragma once

#include "../mscorlib/System/ValueType.h"


class PlayerKillData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerKillData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	bool& Value() {
		return *(bool*)((uintptr_t)this + 0x4);
	}

};};
