#pragma once

#include "../mscorlib/System/ValueType.h"


class AcquireDailyVIPChestData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AcquireDailyVIPChestData"));
	}

	int64_t& StoreDataId() {
		return *(int64_t*)((uintptr_t)this + 0x0);
	}

};};
