#pragma once

#include "../mscorlib/System/ValueType.h"


class SelectPetData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SelectPetData"));
	}

	Il2CppString*& Name() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

	bool& Fast() {
		return *(bool*)((uintptr_t)this + 0x8);
	}

};};
