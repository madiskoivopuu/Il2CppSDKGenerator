#pragma once

#include "../mscorlib/System/ValueType.h"


class OpenInventoryContainerRequest : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OpenInventoryContainerRequest"));
	}

	int32_t& TargetId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& Key() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

};};
