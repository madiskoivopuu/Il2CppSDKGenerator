#pragma once

#include "../mscorlib/System/ValueType.h"


class OpenWindowData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OpenWindowData"));
	}

	int32_t& TargetId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& Name() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	Il2CppString*& Arg() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

	Il2CppString*& ItemName() {
		return *(Il2CppString**)((uintptr_t)this + 0x18);
	}

};};
