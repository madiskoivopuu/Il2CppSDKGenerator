#pragma once

#include "../mscorlib/System/ValueType.h"


class FuelSlotChangedData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FuelSlotChangedData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& Resource() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	int32_t& ResourceCount() {
		return *(int32_t*)((uintptr_t)this + 0x10);
	}

	float& BurnTimeLeft() {
		return *(float*)((uintptr_t)this + 0x14);
	}

};};
