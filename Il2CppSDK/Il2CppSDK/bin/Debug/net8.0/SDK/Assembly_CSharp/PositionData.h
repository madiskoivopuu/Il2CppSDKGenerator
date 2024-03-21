#pragma once

#include "../mscorlib/System/ValueType.h"


class PositionData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PositionData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	int64_t& Ticks() {
		return *(int64_t*)((uintptr_t)this + 0x8);
	}

	float& PosX() {
		return *(float*)((uintptr_t)this + 0x10);
	}

	float& PosY() {
		return *(float*)((uintptr_t)this + 0x14);
	}

	float& VelX() {
		return *(float*)((uintptr_t)this + 0x18);
	}

	float& VelY() {
		return *(float*)((uintptr_t)this + 0x1C);
	}

};};
