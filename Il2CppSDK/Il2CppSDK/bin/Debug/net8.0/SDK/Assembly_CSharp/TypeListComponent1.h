#pragma once

#include "../mscorlib/System/Object.h"


class TypeListComponent1 : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TypeListComponent`1"));
	}

	Il2CppList<T>*& List() {
		return *(Il2CppList<T>**)((uintptr_t)this + 0x0);
	}

};};
