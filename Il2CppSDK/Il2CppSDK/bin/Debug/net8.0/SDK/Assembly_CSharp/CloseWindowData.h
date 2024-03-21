#pragma once

#include "../mscorlib/System/ValueType.h"


class CloseWindowData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CloseWindowData"));
	}

	Il2CppString*& Name() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

};};
