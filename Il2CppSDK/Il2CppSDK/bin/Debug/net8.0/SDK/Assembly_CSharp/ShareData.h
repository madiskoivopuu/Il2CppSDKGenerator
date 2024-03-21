#pragma once

#include "../mscorlib/System/ValueType.h"


class ShareData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShareData"));
	}

	int32_t& TargetId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	bool& IsShared() {
		return *(bool*)((uintptr_t)this + 0x4);
	}

	bool& CantSwitch() {
		return *(bool*)((uintptr_t)this + 0x5);
	}

};};
