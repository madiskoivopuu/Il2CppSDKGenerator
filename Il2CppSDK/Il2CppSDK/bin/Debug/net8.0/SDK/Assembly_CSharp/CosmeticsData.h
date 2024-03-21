#pragma once

#include "../mscorlib/System/ValueType.h"
#include "Gender.h"


class CosmeticsData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CosmeticsData"));
	}

	Gender& Gender() {
		return *(Gender*)((uintptr_t)this + 0x0);
	}

	Il2CppDictionary<int32_t, Il2CppString*>*& Slots() {
		return *(Il2CppDictionary<int32_t, Il2CppString*>**)((uintptr_t)this + 0x8);
	}

};};
