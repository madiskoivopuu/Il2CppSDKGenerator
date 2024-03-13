#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GradeUpPetSkillData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GradeUpPetSkillData"));
	}

	template <typename T = int32_t> T& SlotId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& SkillIndex() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(GradeUpPetSkillData*, uintptr_t))(Il2CppBase() + 0x12E2464))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(GradeUpPetSkillData*, uintptr_t))(Il2CppBase() + 0x12E24B8))(this, reader);
	}

};

