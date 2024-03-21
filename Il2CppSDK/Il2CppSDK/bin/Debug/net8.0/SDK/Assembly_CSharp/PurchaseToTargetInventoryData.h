#pragma once

#include "../mscorlib/System/ValueType.h"
#include "CurrencyType.h"


class PurchaseToTargetInventoryData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PurchaseToTargetInventoryData"));
	}

	CurrencyType& CurrencyType() {
		return *(CurrencyType*)((uintptr_t)this + 0x0);
	}

	int32_t& SlotIndex() {
		return *(int32_t*)((uintptr_t)this + 0x4);
	}

};};
