#pragma once

#include "../mscorlib/System/ValueType.h"


class SplitInventoryData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SplitInventoryData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	int32_t& SplitedCount() {
		return *(int32_t*)((uintptr_t)this + 0x4);
	}

	int32_t& ToId() {
		return *(int32_t*)((uintptr_t)this + 0x8);
	}

};};
