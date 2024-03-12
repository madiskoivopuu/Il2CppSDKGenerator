#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ToolTipViewBase" 

class PetSkillInfo: ToolTipViewBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetSkillInfo"));
	}

	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _name() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _description() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _rarityIcon() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _lockIcon() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _canvasGroup() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& _skillIndex() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppString*> T& _notYetKey() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = int32_t> T get_Index() {
		return ((T (*)(PetSkillInfo*))(Il2CppBase() + 0x16ED84C))(this);
	}
	template <typename T = void> T set_Index(int32_t value) {
		return ((T (*)(PetSkillInfo*, int32_t))(Il2CppBase() + 0x16ED854))(this, value);
	}
	template <typename T = void> T Show(uintptr_t item, int32_t index) {
		return ((T (*)(PetSkillInfo*, uintptr_t, int32_t))(Il2CppBase() + 0x16ED85C))(this, item, index);
	}

};

}
