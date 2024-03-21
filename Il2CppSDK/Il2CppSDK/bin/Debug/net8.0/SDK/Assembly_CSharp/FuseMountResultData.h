#pragma once

#include "../mscorlib/System/ValueType.h"
#include "MountFuser/Result.h"


class FuseMountResultData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FuseMountResultData"));
	}

	MountFuser::Result& Result() {
		return *(MountFuser::Result*)((uintptr_t)this + 0x0);
	}

	int32_t& SlotId() {
		return *(int32_t*)((uintptr_t)this + 0x4);
	}

};};
