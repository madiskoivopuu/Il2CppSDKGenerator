#pragma once

#include "../mscorlib/System/ValueType.h"


class ArmingData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArmingData"));
	}

	int32_t& Id() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& Name() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	int32_t& Index() {
		return *(int32_t*)((uintptr_t)this + 0x10);
	}

};};
