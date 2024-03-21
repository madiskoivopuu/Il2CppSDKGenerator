#pragma once

#include "../mscorlib/System/Object.h"


class DeathCounterComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeathCounterComponent"));
	}

	int32_t& Count() {
		return *(int32_t*)((uintptr_t)this + 0x10);
	}

	float& Timer() {
		return *(float*)((uintptr_t)this + 0x14);
	}

};};
