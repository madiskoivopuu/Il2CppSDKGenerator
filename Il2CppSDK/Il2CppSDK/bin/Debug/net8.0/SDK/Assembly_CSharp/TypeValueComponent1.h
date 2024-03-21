#pragma once

#include "../mscorlib/System/Object.h"


class TypeValueComponent1 : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TypeValueComponent`1"));
	}

	T& Value() {
		return *(T*)((uintptr_t)this + 0x0);
	}

};};
