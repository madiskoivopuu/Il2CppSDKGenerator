#pragma once

#include "../mscorlib/System/ValueType.h"


class CurrencyExchangeData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrencyExchangeData"));
	}

	int32_t& Count() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	int32_t& BuffSlotID() {
		return *(int32_t*)((uintptr_t)this + 0x4);
	}

};};
