#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GradeUpPetSkillDataResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GradeUpPetSkillDataResult"));
	}

	template <typename T = int32_t> T& SkillIndex() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& PetName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Error() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(GradeUpPetSkillDataResult*, uintptr_t))(Il2CppBase() + 0x12E25BC))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(GradeUpPetSkillDataResult*, uintptr_t))(Il2CppBase() + 0x12E2620))(this, reader);
	}

};

