#pragma once

#include "../mscorlib/System/Object.h"
#include "CurrencyType.h"


class LocationResetInfoData : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationResetInfoData"));
	}

	int64_t& ResetTime() {
		return *(int64_t*)((uintptr_t)this + 0x10);
	}

	int64_t& CoolDownTime() {
		return *(int64_t*)((uintptr_t)this + 0x18);
	}

	int32_t& ResetCount() {
		return *(int32_t*)((uintptr_t)this + 0x20);
	}

	CurrencyType& CurrencyType() {
		return *(CurrencyType*)((uintptr_t)this + 0x24);
	}

	int32_t& Price() {
		return *(int32_t*)((uintptr_t)this + 0x28);
	}

};};
