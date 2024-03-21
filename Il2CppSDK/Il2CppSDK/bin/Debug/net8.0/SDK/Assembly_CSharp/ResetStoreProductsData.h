#pragma once

#include "../mscorlib/System/ValueType.h"
#include "StoreCategory.h"


class ResetStoreProductsData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResetStoreProductsData"));
	}

	int32_t& TargetId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	StoreCategory& Category() {
		return *(StoreCategory*)((uintptr_t)this + 0x4);
	}

};};
