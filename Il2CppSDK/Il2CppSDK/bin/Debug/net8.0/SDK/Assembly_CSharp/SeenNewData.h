#pragma once

#include "../mscorlib/System/ValueType.h"
#include "SeenNewType.h"


class SeenNewData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeenNewData"));
	}

	SeenNewType& Type() {
		return *(SeenNewType*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& Param() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

};};
