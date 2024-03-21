#pragma once

#include "../mscorlib/System/ValueType.h"


class MoveResourceData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveResourceData"));
	}

	Il2CppString*& ResourceName() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

	int32_t& ToId() {
		return *(int32_t*)((uintptr_t)this + 0x8);
	}

};};
