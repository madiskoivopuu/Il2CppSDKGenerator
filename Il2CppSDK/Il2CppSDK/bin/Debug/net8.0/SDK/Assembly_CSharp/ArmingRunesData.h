#pragma once

#include "../mscorlib/System/ValueType.h"


class ArmingRunesData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArmingRunesData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	Il2CppArray<Il2CppString*>*& Names() {
		return *(Il2CppArray<Il2CppString*>**)((uintptr_t)this + 0x8);
	}

};};
