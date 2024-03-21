#pragma once

#include "../mscorlib/System/ValueType.h"


class GradeUpPetSkillData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GradeUpPetSkillData"));
	}

	int32_t& SlotId() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	int32_t& SkillIndex() {
		return *(int32_t*)((uintptr_t)this + 0x4);
	}

};};
