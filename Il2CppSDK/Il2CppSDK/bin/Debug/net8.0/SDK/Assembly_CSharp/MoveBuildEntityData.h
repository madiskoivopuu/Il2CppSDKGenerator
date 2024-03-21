#pragma once

#include "../mscorlib/System/ValueType.h"


class MoveBuildEntityData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveBuildEntityData"));
	}

	int32_t& EntityId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	float& PosX() {
		return *(float*)((uintptr_t)this + 0x4);
	}

	float& PosY() {
		return *(float*)((uintptr_t)this + 0x8);
	}

	uint8_t& Orientation() {
		return *(uint8_t*)((uintptr_t)this + 0xC);
	}

};};
