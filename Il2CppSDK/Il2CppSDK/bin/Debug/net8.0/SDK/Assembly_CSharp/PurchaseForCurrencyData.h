#pragma once

#include "../mscorlib/System/ValueType.h"
#include "CurrencyType.h"


class PurchaseForCurrencyData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PurchaseForCurrencyData"));
	}

	int64_t& StoreId() {
		return *(int64_t*)((uintptr_t)this + 0x0);
	}

	CurrencyType& Currency() {
		return *(CurrencyType*)((uintptr_t)this + 0x8);
	}

};};
