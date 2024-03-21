#pragma once

#include "../mscorlib/System/ValueType.h"


class MoveEntityDataForMapClient : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveEntityDataForMapClient"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& StartId() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	Il2CppString*& EndId() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

	float& Speed() {
		return *(float*)((uintptr_t)this + 0x18);
	}

	int64_t& ArrivalTime() {
		return *(int64_t*)((uintptr_t)this + 0x20);
	}

	int64_t& Energy() {
		return *(int64_t*)((uintptr_t)this + 0x28);
	}

};};
