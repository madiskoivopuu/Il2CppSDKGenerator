#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GradeUpPetSkillData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GradeUpPetSkillData"));
	}

	template <typename R = int32_t> R& SlotId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& SkillIndex() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(GradeUpPetSkillData*, uintptr_t))(Il2CppBase() + 0x12E2464))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(GradeUpPetSkillData*, uintptr_t))(Il2CppBase() + 0x12E24B8))(this, reader);
	}

};

