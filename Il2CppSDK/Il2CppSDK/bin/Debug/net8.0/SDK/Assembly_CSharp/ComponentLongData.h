#pragma once

#include "../mscorlib/System/ValueType.h"


class ComponentLongData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ComponentLongData"));
	}

	int64_t& Id() {
		return *(int64_t*)((uintptr_t)this + 0x0);
	}

	int16_t& ComponentIndex() {
		return *(int16_t*)((uintptr_t)this + 0x8);
	}

	bool& Replace() {
		return *(bool*)((uintptr_t)this + 0xA);
	}

	int64_t& Value() {
		return *(int64_t*)((uintptr_t)this + 0x10);
	}

};};
