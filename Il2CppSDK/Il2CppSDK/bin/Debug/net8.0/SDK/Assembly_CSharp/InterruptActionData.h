#pragma once

#include "../mscorlib/System/ValueType.h"


class InterruptActionData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InterruptActionData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	int64_t& Now() {
		return *(int64_t*)((uintptr_t)this + 0x8);
	}

};};
