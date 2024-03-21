#pragma once

#include "../mscorlib/System/ValueType.h"


class ShowChestMarkerData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowChestMarkerData"));
	}

	bool& Show() {
		return *(bool*)((uintptr_t)this + 0x0);
	}

};};
