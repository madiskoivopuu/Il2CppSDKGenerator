#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Phase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Phase"));
	}

	template <typename R = bool> R& ClearDebuff() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Magics() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = float> R& HpPercent() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<ActiveTarget>*> R& ActiveTargets() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& WeaponItem() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& Pocket1Item() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& Pocket2Item() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& Pocket3Item() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& Skill1Item() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppString*> R& Skill2Item() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& Skill3Item() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppString*> R& Skill4Item() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = Il2CppString*> R& Skill5Item() {
		return *(R*)((uintptr_t)this + 0x60);
	}


};

