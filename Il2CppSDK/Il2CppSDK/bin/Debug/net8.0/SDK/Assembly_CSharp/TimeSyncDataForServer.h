#pragma once

#include "../mscorlib/System/ValueType.h"


class TimeSyncDataForServer : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TimeSyncDataForServer"));
	}

	int64_t& Ticks() {
		return *(int64_t*)((uintptr_t)this + 0x0);
	}

};};
