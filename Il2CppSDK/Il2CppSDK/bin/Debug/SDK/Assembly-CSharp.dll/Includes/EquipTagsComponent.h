#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EquipTagsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EquipTagsComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(EquipTagsComponent*, uintptr_t))(Il2CppBase() + 0x137C34C))(this, target);
	}
	template <typename T = uintptr_t> T GetGroup() {
		return ((T (*)(EquipTagsComponent*))(Il2CppBase() + 0x137C3E4))(this);
	}
	template <typename T = float> T GetValue() {
		return ((T (*)(EquipTagsComponent*))(Il2CppBase() + 0x137C3EC))(this);
	}

};

}
