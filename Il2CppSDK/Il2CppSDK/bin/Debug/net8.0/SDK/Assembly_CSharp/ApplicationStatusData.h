#pragma once

#include "../mscorlib/System/ValueType.h"


class ApplicationStatusData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplicationStatusData"));
	}

	bool& Paused() {
		return *(bool*)((uintptr_t)this + 0x0);
	}

	bool& IsAFK() {
		return *(bool*)((uintptr_t)this + 0x1);
	}

};};
