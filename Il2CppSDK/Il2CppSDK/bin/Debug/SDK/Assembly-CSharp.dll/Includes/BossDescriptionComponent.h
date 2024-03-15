#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BossDescriptionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossDescriptionComponent"));
	}

	template <typename R = Il2CppArray<PhaseDescription>*> R& Phases() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<SkillDescription>*> R& Skills() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Difficulty> R& Difficulty() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& LocationName() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& ExitTag() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& ToLocationName() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& LocationImage() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppString*> R& BossTransparentImage() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& BestRewards() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(BossDescriptionComponent*, Il2CppObject*))(Il2CppBase() + 0x16C9C84))(this, target);
	}

};

