#pragma once

#include "../mscorlib/System/ValueType.h"


class SetLanguageData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetLanguageData"));
	}

	Il2CppString*& Language() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

};};
