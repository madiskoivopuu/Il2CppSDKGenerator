#pragma once

#include "../mscorlib/System/Object.h"


class StringValuesComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringValuesComponent"));
	}

	Il2CppArray<Il2CppString*>*& Values() {
		return *(Il2CppArray<Il2CppString*>**)((uintptr_t)this + 0x10);
	}

};};
