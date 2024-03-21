#pragma once

#include "../mscorlib/System/Object.h"


class IntCountComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IntCountComponent"));
	}

	int32_t& Count() {
		return *(int32_t*)((uintptr_t)this + 0x10);
	}

};};
