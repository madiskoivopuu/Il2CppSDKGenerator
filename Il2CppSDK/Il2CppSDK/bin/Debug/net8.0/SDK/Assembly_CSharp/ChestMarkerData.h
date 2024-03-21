#pragma once

#include "../mscorlib/System/ValueType.h"


class ChestMarkerData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChestMarkerData"));
	}

	int32_t& TargetId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	int32_t& SlotIndex() {
		return *(int32_t*)((uintptr_t)this + 0x4);
	}

	Il2CppString*& ItemName() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

};};
