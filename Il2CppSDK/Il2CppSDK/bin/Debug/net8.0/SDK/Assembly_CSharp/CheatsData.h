#pragma once

#include "../mscorlib/System/ValueType.h"


class CheatsData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CheatsData"));
	}

	Il2CppString*& Name() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

	Il2CppString*& Param() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	int32_t& Count() {
		return *(int32_t*)((uintptr_t)this + 0x10);
	}

	bool& IsActive() {
		return *(bool*)((uintptr_t)this + 0x14);
	}

};};
