#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ToolTipViewBase.h" 

class PetSkillInfo : public ToolTipViewBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetSkillInfo"));
	}

	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _name() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& _description() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& _rarityIcon() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _lockIcon() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _canvasGroup() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = int32_t> R& _skillIndex() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = int32_t> R& Index() {
		return *(R*)((uintptr_t)this + 0x94);
	}
	template <typename R = Il2CppString*> R& _notYetKey() {
		return *(R*)((uintptr_t)this + 0x98);
	}

	template <typename R = int32_t> R get_Index() {
		return ((R (*)(PetSkillInfo*))(Il2CppBase() + 0x16ED84C))(this);
	}
	template <typename R = void> R set_Index(int32_t value) {
		return ((R (*)(PetSkillInfo*, int32_t))(Il2CppBase() + 0x16ED854))(this, value);
	}
	template <typename R = void> R Show(ItemEntity* item, int32_t index) {
		return ((R (*)(PetSkillInfo*, ItemEntity*, int32_t))(Il2CppBase() + 0x16ED85C))(this, item, index);
	}

};

