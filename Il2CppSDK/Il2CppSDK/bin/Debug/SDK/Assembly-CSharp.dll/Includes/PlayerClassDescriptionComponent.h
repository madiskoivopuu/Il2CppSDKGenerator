#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerClassDescriptionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassDescriptionComponent"));
	}

	template <typename T = Il2CppString*> T& MainQuest() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& MasteryQuest() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& ExpertiseQuest() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& BlockerQuest() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& OtherQuests() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Related() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& Next() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& Row() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& Grade() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Role() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& IsNew() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& AvailableCondition() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& WeaponTag() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& ArmorTag() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = Il2CppString*> T GetProgressQuest(PlayerClassProgress* classPoints) {
		return ((T (*)(PlayerClassDescriptionComponent*, PlayerClassProgress*))(Il2CppBase() + 0x17047DC))(this, classPoints);
	}
	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(PlayerClassDescriptionComponent*, Il2CppObject*))(Il2CppBase() + 0x170480C))(this, targetObject);
	}

};

