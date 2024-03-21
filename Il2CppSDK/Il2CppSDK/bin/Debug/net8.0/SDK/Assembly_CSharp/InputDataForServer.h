#pragma once

#include "../mscorlib/System/ValueType.h"


class InputDataForServer : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputDataForServer"));
	}

	float& X() {
		return *(float*)((uintptr_t)this + 0x0);
	}

	float& Y() {
		return *(float*)((uintptr_t)this + 0x4);
	}

	int64_t& Ticks() {
		return *(int64_t*)((uintptr_t)this + 0x8);
	}

	int32_t& MoveToTargetId() {
		return *(int32_t*)((uintptr_t)this + 0x10);
	}

};};
