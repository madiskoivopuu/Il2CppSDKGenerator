#pragma once

#include "../mscorlib/System/ValueType.h"


class SetEndTimeData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetEndTimeData"));
	}

	int32_t& TargetId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	int64_t& Value() {
		return *(int64_t*)((uintptr_t)this + 0x8);
	}

};};
