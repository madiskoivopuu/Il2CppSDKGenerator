#pragma once

#include "../mscorlib/System/ValueType.h"


class PurchaseForItemsData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PurchaseForItemsData"));
	}

	int64_t& StoreId() {
		return *(int64_t*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& Name() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

};};
