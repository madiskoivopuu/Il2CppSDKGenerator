#pragma once

#include "../mscorlib/System/ValueType.h"


class AFKData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AFKData"));
	}

	bool& WindowOpenedState() {
		return *(bool*)((uintptr_t)this + 0x0);
	}

};};
