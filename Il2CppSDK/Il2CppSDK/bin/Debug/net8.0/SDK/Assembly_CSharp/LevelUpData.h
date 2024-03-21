#pragma once

#include "../mscorlib/System/ValueType.h"


class LevelUpData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LevelUpData"));
	}

	int64_t& PlayerId() {
		return *(int64_t*)((uintptr_t)this + 0x0);
	}

	int32_t& NewLevel() {
		return *(int32_t*)((uintptr_t)this + 0x8);
	}

	int32_t& OldLevel() {
		return *(int32_t*)((uintptr_t)this + 0xC);
	}

};};
