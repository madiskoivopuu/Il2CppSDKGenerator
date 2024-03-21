#pragma once

#include "../mscorlib/System/ValueType.h"


class TimeSyncDataForClient : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TimeSyncDataForClient"));
	}

	int64_t& Ticks() {
		return *(int64_t*)((uintptr_t)this + 0x0);
	}

	int64_t& ServerTicks() {
		return *(int64_t*)((uintptr_t)this + 0x8);
	}

};};
