#pragma once

#include "../mscorlib/System/ValueType.h"


class MoveEntityDataForMapServer : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveEntityDataForMapServer"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& MapSlotName() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	bool& Fast() {
		return *(bool*)((uintptr_t)this + 0x10);
	}

};};
