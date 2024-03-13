#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetComponent"));
	}

	template <typename T = int32_t> T& Order() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Type() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Skill1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Skill2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Skill3() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T GetSkills(int32_t slotIndex) {
		return ((T (*)(PetComponent*, int32_t))(Il2CppBase() + 0x11EB5A4))(this, slotIndex);
	}
	template <typename T = Il2CppString*> T GetSkill(int32_t slotIndex, int32_t index) {
		return ((T (*)(PetComponent*, int32_t, int32_t))(Il2CppBase() + 0x11EB5DC))(this, slotIndex, index);
	}
	template <typename T = int32_t> T GetSkillIndex(int32_t slotIndex, Il2CppString* skillName, int32_t defaultIndex) {
		return ((T (*)(PetComponent*, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x11EB654))(this, slotIndex, skillName, defaultIndex);
	}
	template <typename T = int32_t> T CorrectSkillIndex(int32_t slotIndex, int32_t index) {
		return ((T (*)(PetComponent*, int32_t, int32_t))(Il2CppBase() + 0x11EB728))(this, slotIndex, index);
	}
	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(PetComponent*, Il2CppObject*))(Il2CppBase() + 0x11EB77C))(this, target);
	}

};

