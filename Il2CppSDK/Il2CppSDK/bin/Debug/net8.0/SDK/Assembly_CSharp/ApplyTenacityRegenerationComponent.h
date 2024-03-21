#pragma once

#include "../mscorlib/System/Object.h"


class ApplyTenacityRegenerationComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyTenacityRegenerationComponent"));
	}

	bool& DependsOnMaxTenacity() {
		return *(bool*)((uintptr_t)this + 0x10);
	}

	float& Value() {
		return *(float*)((uintptr_t)this + 0x14);
	}

};};
