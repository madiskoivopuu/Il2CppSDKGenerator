#pragma once

#include "../mscorlib/System/ValueType.h"


class ItemCooldown : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemCooldown"));
	}

	Il2CppString*& Name() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

	int64_t& Ticks() {
		return *(int64_t*)((uintptr_t)this + 0x8);
	}

	float& Duration() {
		return *(float*)((uintptr_t)this + 0x10);
	}

	Il2CppArray<Il2CppString*>*& Tags() {
		return *(Il2CppArray<Il2CppString*>**)((uintptr_t)this + 0x18);
	}

};};
