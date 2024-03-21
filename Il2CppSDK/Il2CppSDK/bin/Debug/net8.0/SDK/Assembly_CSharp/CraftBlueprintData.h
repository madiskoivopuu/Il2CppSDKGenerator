#pragma once

#include "../mscorlib/System/ValueType.h"


class CraftBlueprintData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftBlueprintData"));
	}

	Il2CppString*& Blueprint() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

};};
