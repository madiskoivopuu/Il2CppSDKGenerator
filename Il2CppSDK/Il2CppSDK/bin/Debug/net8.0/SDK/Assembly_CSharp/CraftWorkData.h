#pragma once

#include "../mscorlib/System/ValueType.h"


class CraftWorkData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftWorkData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& RecipeName() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	int64_t& Time() {
		return *(int64_t*)((uintptr_t)this + 0x10);
	}

	Il2CppString*& Fuel() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

	int64_t& FuelTime() {
		return *(int64_t*)((uintptr_t)this + 0x20);
	}

	float& Boost() {
		return *(float*)((uintptr_t)this + 0x28);
	}

	bool& IsBlocked() {
		return *(bool*)((uintptr_t)this + 0x2C);
	}

	int64_t& BlockTime() {
		return *(int64_t*)((uintptr_t)this + 0x30);
	}

};};
