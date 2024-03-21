#pragma once

#include "../mscorlib/System/ValueType.h"


class HideHeadData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HideHeadData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	bool& Hide() {
		return *(bool*)((uintptr_t)this + 0x4);
	}

};};
