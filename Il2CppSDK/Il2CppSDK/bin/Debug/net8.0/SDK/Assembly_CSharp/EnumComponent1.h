#pragma once

#include "../mscorlib/System/Object.h"


class EnumComponent1 : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnumComponent`1"));
	}

	T& Type() {
		return *(T*)((uintptr_t)this + 0x0);
	}

};};
