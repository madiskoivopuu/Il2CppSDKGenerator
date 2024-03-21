#pragma once

#include "../mscorlib/System/Object.h"


class NextPortalsPointsComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NextPortalsPointsComponent"));
	}

	int32_t& Points() {
		return *(int32_t*)((uintptr_t)this + 0x10);
	}

	int32_t& World() {
		return *(int32_t*)((uintptr_t)this + 0x14);
	}

};};
