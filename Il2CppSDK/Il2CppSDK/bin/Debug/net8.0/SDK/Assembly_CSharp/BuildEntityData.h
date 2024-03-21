#pragma once

#include "../mscorlib/System/ValueType.h"


class BuildEntityData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuildEntityData"));
	}

	Il2CppString*& Recipe() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

	float& X() {
		return *(float*)((uintptr_t)this + 0x8);
	}

	float& Y() {
		return *(float*)((uintptr_t)this + 0xC);
	}

	uint8_t& Orientation() {
		return *(uint8_t*)((uintptr_t)this + 0x10);
	}

	int64_t& Time() {
		return *(int64_t*)((uintptr_t)this + 0x18);
	}

};};
