#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ItemView.h" 

class PetSkillItemView : public ItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetSkillItemView"));
	}

	template <typename R = uintptr_t> R& _canUpgradeMark() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = bool> R& HideCanUpgradeMark() {
		return *(R*)((uintptr_t)this + 0x88);
	}

	template <typename R = bool> R get_HideCanUpgradeMark() {
		return ((R (*)(PetSkillItemView*))(Il2CppBase() + 0x16EDEEC))(this);
	}
	template <typename R = void> R set_HideCanUpgradeMark(bool value) {
		return ((R (*)(PetSkillItemView*, bool))(Il2CppBase() + 0x16EDEF4))(this, value);
	}
	template <typename R = void> R Show(ItemEntity* item, int32_t count) {
		return ((R (*)(PetSkillItemView*, ItemEntity*, int32_t))(Il2CppBase() + 0x16EDF00))(this, item, count);
	}
	template <typename R = void> R UpdateCanUpgrade() {
		return ((R (*)(PetSkillItemView*))(Il2CppBase() + 0x16ED518))(this);
	}

};

