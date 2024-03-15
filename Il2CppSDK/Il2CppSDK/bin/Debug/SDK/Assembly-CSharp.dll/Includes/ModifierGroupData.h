#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModifierGroupData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModifierGroupData"));
	}

	template <typename R = Il2CppArray<ModifierGroupType>*> static R& _data() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = ModifierGroupType> static R ToGroupType(ModifierGroup group) {
		return ((R (*)(void *, ModifierGroup))(Il2CppBase() + 0x1E917B4))(0, group);
	}
	template <typename R = bool> static R IsSum(ModifierGroup group) {
		return ((R (*)(void *, ModifierGroup))(Il2CppBase() + 0x1E91844))(0, group);
	}
	template <typename R = bool> static R IsMax(ModifierGroup group) {
		return ((R (*)(void *, ModifierGroup))(Il2CppBase() + 0x1E918DC))(0, group);
	}
	template <typename R = bool> static R IsNone(ModifierGroup group) {
		return ((R (*)(void *, ModifierGroup))(Il2CppBase() + 0x1E91974))(0, group);
	}

};

