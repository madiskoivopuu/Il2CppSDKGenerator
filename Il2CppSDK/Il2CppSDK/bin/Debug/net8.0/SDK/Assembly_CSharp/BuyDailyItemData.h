#pragma once

#include "../mscorlib/System/ValueType.h"
#include "ServiceMessage.h"


class BuyDailyItemData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuyDailyItemData"));
	}

	int32_t& SlotId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	ServiceMessage& Result() {
		return *(ServiceMessage*)((uintptr_t)this + 0x4);
	}

};};
