#pragma once

#include "../mscorlib/System/ValueType.h"
#include "PlayerClassType.h"


class MoveRuneToFromClassData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveRuneToFromClassData"));
	}

	int32_t& SlotId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	PlayerClassType& ClassType() {
		return *(PlayerClassType*)((uintptr_t)this + 0x4);
	}

	int32_t& FromClassSlotIndex() {
		return *(int32_t*)((uintptr_t)this + 0x8);
	}

	int32_t& ToClassSlotIndex() {
		return *(int32_t*)((uintptr_t)this + 0xC);
	}

	bool& ToClass() {
		return *(bool*)((uintptr_t)this + 0x10);
	}

	bool& AllowMerge() {
		return *(bool*)((uintptr_t)this + 0x11);
	}

};};
