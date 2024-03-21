#pragma once

#include "../mscorlib/System/ValueType.h"


class CreateMagicTriggerData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateMagicTriggerData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& Blueprint() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	int32_t& UseCount() {
		return *(int32_t*)((uintptr_t)this + 0x10);
	}

	int32_t& SkipCount() {
		return *(int32_t*)((uintptr_t)this + 0x14);
	}

};};
