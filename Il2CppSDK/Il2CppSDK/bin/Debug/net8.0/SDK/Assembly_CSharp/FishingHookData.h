#pragma once

#include "../mscorlib/System/ValueType.h"


class FishingHookData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FishingHookData"));
	}

	int64_t& Time() {
		return *(int64_t*)((uintptr_t)this + 0x0);
	}

	bool& UseNet() {
		return *(bool*)((uintptr_t)this + 0x8);
	}

};};
