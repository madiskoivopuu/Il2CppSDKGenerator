#pragma once

#include "../mscorlib/System/ValueType.h"


class DestroyBuildEntityData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyBuildEntityData"));
	}

	int32_t& EntityId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

};};
