#pragma once

#include "../mscorlib/System/ValueType.h"


class QuadFillData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuadFillData"));
	}

	Il2CppArray<int64_t>*& Owners() {
		return *(Il2CppArray<int64_t>**)((uintptr_t)this + 0x0);
	}

};};
