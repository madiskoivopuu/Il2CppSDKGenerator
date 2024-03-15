#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EquipTagsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EquipTagsComponent"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R& Values() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(EquipTagsComponent*, Il2CppObject*))(Il2CppBase() + 0x137C34C))(this, target);
	}
	template <typename R = ModifierGroup*> R GetGroup() {
		return ((R (*)(EquipTagsComponent*))(Il2CppBase() + 0x137C3E4))(this);
	}
	template <typename R = float> R GetValue() {
		return ((R (*)(EquipTagsComponent*))(Il2CppBase() + 0x137C3EC))(this);
	}

};

