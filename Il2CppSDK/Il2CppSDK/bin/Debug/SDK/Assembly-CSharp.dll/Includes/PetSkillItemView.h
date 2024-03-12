#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ItemView" 

class PetSkillItemView: ItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetSkillItemView"));
	}

	template <typename T = uintptr_t> T& _canUpgradeMark() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& HideCanUpgradeMark() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = bool> T get_HideCanUpgradeMark() {
		return ((T (*)(PetSkillItemView*))(Il2CppBase() + 0x16EDEEC))(this);
	}
	template <typename T = void> T set_HideCanUpgradeMark(bool value) {
		return ((T (*)(PetSkillItemView*, bool))(Il2CppBase() + 0x16EDEF4))(this, value);
	}
	template <typename T = void> T Show(uintptr_t item, int32_t count) {
		return ((T (*)(PetSkillItemView*, uintptr_t, int32_t))(Il2CppBase() + 0x16EDF00))(this, item, count);
	}
	template <typename T = void> T UpdateCanUpgrade() {
		return ((T (*)(PetSkillItemView*))(Il2CppBase() + 0x16ED518))(this);
	}

};

}
