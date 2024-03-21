#pragma once

#include "../mscorlib/System/ValueType.h"
#include "CurrencyType.h"


class GetAllBPrewardsData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GetAllBPrewardsData"));
	}

	CurrencyType& CurrencyType() {
		return *(CurrencyType*)((uintptr_t)this + 0x0);
	}

};};
