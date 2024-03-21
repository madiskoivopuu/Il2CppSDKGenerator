#pragma once

#include "../mscorlib/System/ValueType.h"


class MoveInventoryData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveInventoryData"));
	}

	int32_t& FromId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	int32_t& ToId() {
		return *(int32_t*)((uintptr_t)this + 0x4);
	}

};};
