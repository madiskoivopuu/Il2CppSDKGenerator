#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerClassDescriptionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassDescriptionComponent"));
	}

	template <typename R = Il2CppString*> R& MainQuest() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& MasteryQuest() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& ExpertiseQuest() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& BlockerQuest() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& OtherQuests() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Related() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& Next() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> R& Level() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> R& Row() {
		return *(R*)((uintptr_t)this + 0x4C);
	}
	template <typename R = int32_t> R& Grade() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Role() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = bool> R& IsNew() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppString*> R& AvailableCondition() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = Il2CppString*> R& WeaponTag() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = Il2CppString*> R& ArmorTag() {
		return *(R*)((uintptr_t)this + 0x78);
	}

	template <typename R = Il2CppString*> R GetProgressQuest(PlayerClassProgress classPoints) {
		return ((R (*)(PlayerClassDescriptionComponent*, PlayerClassProgress))(Il2CppBase() + 0x17047DC))(this, classPoints);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(PlayerClassDescriptionComponent*, Il2CppObject*))(Il2CppBase() + 0x170480C))(this, targetObject);
	}

};

