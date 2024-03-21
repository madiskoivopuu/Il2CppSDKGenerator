#pragma once

#include "../mscorlib/System/ValueType.h"
#include "CurrencyType.h"


class SetCurrencyData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetCurrencyData"));
	}

	int32_t& TargetId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	CurrencyType& CurrencyType() {
		return *(CurrencyType*)((uintptr_t)this + 0x4);
	}

	int32_t& Count() {
		return *(int32_t*)((uintptr_t)this + 0x8);
	}

};};
