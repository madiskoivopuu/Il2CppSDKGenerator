#pragma once

#include "../mscorlib/System/ValueType.h"


class UpdateMagicTriggerData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateMagicTriggerData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	int32_t& SkipCount() {
		return *(int32_t*)((uintptr_t)this + 0x4);
	}

	int32_t& UseCount() {
		return *(int32_t*)((uintptr_t)this + 0x8);
	}

};};
