#pragma once

#include "../mscorlib/System/ValueType.h"


class ProductionWorkData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProductionWorkData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& WorkerUniqueLookup() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	Il2CppString*& WorkerName() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

	Il2CppString*& KillerName() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

	bool& IsWorkerDead() {
		return *(bool*)((uintptr_t)this + 0x20);
	}

};};
