#pragma once

#include "../mscorlib/System/ValueType.h"


class TakeFurnitureData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TakeFurnitureData"));
	}

	int32_t& EntityId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	bool& Disassemble() {
		return *(bool*)((uintptr_t)this + 0x4);
	}

};};
