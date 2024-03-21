#pragma once

#include "../mscorlib/System/ValueType.h"


class UnlockData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnlockData"));
	}

	int32_t& TargetId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	bool& IsUnlocked() {
		return *(bool*)((uintptr_t)this + 0x4);
	}

	int64_t& AutoLockTime() {
		return *(int64_t*)((uintptr_t)this + 0x8);
	}

};};
