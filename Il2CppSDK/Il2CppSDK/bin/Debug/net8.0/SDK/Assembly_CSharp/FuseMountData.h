#pragma once

#include "../mscorlib/System/ValueType.h"


class FuseMountData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FuseMountData"));
	}

	Il2CppArray<int32_t>*& Ids() {
		return *(Il2CppArray<int32_t>**)((uintptr_t)this + 0x0);
	}

	int32_t& TypeIndex() {
		return *(int32_t*)((uintptr_t)this + 0x8);
	}

	Il2CppArray<int32_t>*& SelectedSkillSlots() {
		return *(Il2CppArray<int32_t>**)((uintptr_t)this + 0x10);
	}

};};
