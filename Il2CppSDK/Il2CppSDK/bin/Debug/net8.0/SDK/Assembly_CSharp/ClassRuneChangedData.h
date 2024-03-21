#pragma once

#include "../mscorlib/System/ValueType.h"
#include "PlayerClassType.h"


class ClassRuneChangedData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassRuneChangedData"));
	}

	PlayerClassType& ClassType() {
		return *(PlayerClassType*)((uintptr_t)this + 0x0);
	}

	int32_t& FromClassSlotIndex() {
		return *(int32_t*)((uintptr_t)this + 0x4);
	}

	Il2CppString*& FromClassBlueprint() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	int64_t& FromClassEndTime() {
		return *(int64_t*)((uintptr_t)this + 0x10);
	}

	int32_t& ToClassSlotIndex() {
		return *(int32_t*)((uintptr_t)this + 0x18);
	}

	Il2CppString*& ToClassBlueprint() {
		return *(Il2CppString**)((uintptr_t)this + 0x20);
	}

	int64_t& ToClassEndTime() {
		return *(int64_t*)((uintptr_t)this + 0x28);
	}

	bool& IsMerge() {
		return *(bool*)((uintptr_t)this + 0x30);
	}

};};
