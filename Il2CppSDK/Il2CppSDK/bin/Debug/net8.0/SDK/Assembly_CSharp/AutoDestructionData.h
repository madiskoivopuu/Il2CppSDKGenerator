#pragma once

#include "../mscorlib/System/ValueType.h"


class AutoDestructionData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoDestructionData"));
	}

	int32_t& TargetId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	float& Time() {
		return *(float*)((uintptr_t)this + 0x4);
	}

	int64_t& StartTime() {
		return *(int64_t*)((uintptr_t)this + 0x8);
	}

	Il2CppString*& Condition() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

	Il2CppString*& Effect() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

};};
