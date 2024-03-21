#pragma once

#include "../mscorlib/System/Object.h"


class TypeDataComponent1 : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TypeDataComponent`1"));
	}

	T& Data() {
		return *(T*)((uintptr_t)this + 0x0);
	}

};};
