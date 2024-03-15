#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GradeUpPetSkillDataResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GradeUpPetSkillDataResult"));
	}

	template <typename R = int32_t> R& SkillIndex() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& PetName() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& Error() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(GradeUpPetSkillDataResult*, uintptr_t))(Il2CppBase() + 0x12E25BC))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(GradeUpPetSkillDataResult*, uintptr_t))(Il2CppBase() + 0x12E2620))(this, reader);
	}

};

