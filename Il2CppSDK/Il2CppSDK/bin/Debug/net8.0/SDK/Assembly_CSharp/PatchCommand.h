#pragma once

#include "../mscorlib/System/ValueType.h"


class PatchCommand : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PatchCommand"));
	}

	Il2CppString*& Name() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

	Il2CppString*& Params() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

};};
