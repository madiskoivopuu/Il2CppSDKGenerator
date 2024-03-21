#pragma once

#include "../mscorlib/System/ValueType.h"


class SelectedQuickSwitchClassesData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SelectedQuickSwitchClassesData"));
	}

	Il2CppArray<Il2CppString*>*& Classes() {
		return *(Il2CppArray<Il2CppString*>**)((uintptr_t)this + 0x0);
	}

};};
