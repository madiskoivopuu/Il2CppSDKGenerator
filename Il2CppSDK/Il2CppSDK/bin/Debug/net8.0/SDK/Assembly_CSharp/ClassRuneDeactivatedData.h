#pragma once

#include "../mscorlib/System/ValueType.h"


class ClassRuneDeactivatedData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassRuneDeactivatedData"));
	}

	Il2CppArray<ClassRunesEndTimeComponent::RuneSlotKey>*& Keys() {
		return *(Il2CppArray<ClassRunesEndTimeComponent::RuneSlotKey>**)((uintptr_t)this + 0x0);
	}

};};
