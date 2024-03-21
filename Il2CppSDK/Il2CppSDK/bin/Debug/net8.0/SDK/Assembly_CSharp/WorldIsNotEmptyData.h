#pragma once

#include "../mscorlib/System/ValueType.h"


class WorldIsNotEmptyData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WorldIsNotEmptyData"));
	}

	Il2CppString*& Blueprints() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

};};
