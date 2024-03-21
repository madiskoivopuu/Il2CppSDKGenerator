#pragma once

#include "../mscorlib/System/ValueType.h"


class HotPredictionData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HotPredictionData"));
	}

	int32_t& TargetId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	float& AddHealth() {
		return *(float*)((uintptr_t)this + 0x4);
	}

};};
