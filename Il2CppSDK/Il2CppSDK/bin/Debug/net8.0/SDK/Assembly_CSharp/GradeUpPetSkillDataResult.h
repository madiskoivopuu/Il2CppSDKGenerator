#pragma once

#include "../mscorlib/System/ValueType.h"


class GradeUpPetSkillDataResult : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GradeUpPetSkillDataResult"));
	}

	int32_t& SkillIndex() {
		return *(int32_t*)((uintptr_t)this + 0x0);
	}

	Il2CppString*& PetName() {
		return *(Il2CppString**)((uintptr_t)this + 0x8);
	}

	Il2CppString*& Error() {
		return *(Il2CppString**)((uintptr_t)this + 0x10);
	}

};};
