#pragma once

#include "../mscorlib/System/Object.h"


class DailyShopStateComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DailyShopStateComponent"));
	}

	int64_t& ResetTime() {
		return *(int64_t*)((uintptr_t)this + 0x10);
	}

	Il2CppArray<bool>*& SoldSlots() {
		return *(Il2CppArray<bool>**)((uintptr_t)this + 0x18);
	}

	Il2CppArray<uint8_t>*& Slots() {
		return *(Il2CppArray<uint8_t>**)((uintptr_t)this + 0x20);
	}

};};
