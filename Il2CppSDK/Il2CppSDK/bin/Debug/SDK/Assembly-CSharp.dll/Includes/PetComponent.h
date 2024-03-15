#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetComponent"));
	}

	template <typename R = int32_t> R& Order() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Type() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Skill1() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Skill2() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Skill3() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R GetSkills(int32_t slotIndex) {
		return ((R (*)(PetComponent*, int32_t))(Il2CppBase() + 0x11EB5A4))(this, slotIndex);
	}
	template <typename R = Il2CppString*> R GetSkill(int32_t slotIndex, int32_t index) {
		return ((R (*)(PetComponent*, int32_t, int32_t))(Il2CppBase() + 0x11EB5DC))(this, slotIndex, index);
	}
	template <typename R = int32_t> R GetSkillIndex(int32_t slotIndex, Il2CppString* skillName, int32_t defaultIndex) {
		return ((R (*)(PetComponent*, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x11EB654))(this, slotIndex, skillName, defaultIndex);
	}
	template <typename R = int32_t> R CorrectSkillIndex(int32_t slotIndex, int32_t index) {
		return ((R (*)(PetComponent*, int32_t, int32_t))(Il2CppBase() + 0x11EB728))(this, slotIndex, index);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(PetComponent*, Il2CppObject*))(Il2CppBase() + 0x11EB77C))(this, target);
	}

};

