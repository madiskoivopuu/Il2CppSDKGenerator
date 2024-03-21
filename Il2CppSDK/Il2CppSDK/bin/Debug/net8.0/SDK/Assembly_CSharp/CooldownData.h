#pragma once

#include "../mscorlib/System/ValueType.h"


class CooldownData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CooldownData"));
	}

	int32_t& TargetId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& Name() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	int64_t& StartTime() {
		return *(int64_t*)((uintptr_t)this + 0x10);
	}

	float& Duration() {
		return *(float*)((uintptr_t)this + 0x18);
	}

	bool& Set() {
		return *(bool*)((uintptr_t)this + 0x1C);
	}

	Il2CppArray<Il2CppString*>*& Tags() {
		return *(Il2CppArray<Il2CppString*>**)((uintptr_t)this + 0x20);
	}

};};
