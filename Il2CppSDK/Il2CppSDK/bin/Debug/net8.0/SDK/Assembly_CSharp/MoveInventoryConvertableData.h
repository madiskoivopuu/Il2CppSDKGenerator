#pragma once

#include "../mscorlib/System/ValueType.h"


class MoveInventoryConvertableData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveInventoryConvertableData"));
	}

	int32_t& FromId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	int32_t& ToId() {
		return *(int32_t*)((uintptr_t)this + 0x4);
	}

};};
