#pragma once

#include "../mscorlib/System/ValueType.h"


class CancelUseData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CancelUseData"));
	}

	Il2CppString*& ItemName() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

};};
