#pragma once

#include "../mscorlib/System/ValueType.h"


class LostControlData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LostControlData"));
	}

	bool& LostControl() {
		return *(bool*)((uintptr_t)this + 0x0);
	}

	int64_t& Ticks() {
		return *(int64_t*)((uintptr_t)this + 0x8);
	}

	float& X() {
		return *(float*)((uintptr_t)this + 0x10);
	}

	float& Y() {
		return *(float*)((uintptr_t)this + 0x14);
	}

};};
