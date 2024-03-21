#pragma once

#include "../mscorlib/System/Object.h"


class TypeArrayComponent1 : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TypeArrayComponent`1"));
	}

	Il2CppArray<T>*& Values() {
		return *(Il2CppArray<T>**)((uintptr_t)this + 0x0);
	}

};};
