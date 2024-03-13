#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModifierGroupData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModifierGroupData"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& _data() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = ModifierGroupType*> static T ToGroupType(ModifierGroup* group) {
		return ((T (*)(void *, ModifierGroup*))(Il2CppBase() + 0x1E917B4))(0, group);
	}
	template <typename T = bool> static T IsSum(ModifierGroup* group) {
		return ((T (*)(void *, ModifierGroup*))(Il2CppBase() + 0x1E91844))(0, group);
	}
	template <typename T = bool> static T IsMax(ModifierGroup* group) {
		return ((T (*)(void *, ModifierGroup*))(Il2CppBase() + 0x1E918DC))(0, group);
	}
	template <typename T = bool> static T IsNone(ModifierGroup* group) {
		return ((T (*)(void *, ModifierGroup*))(Il2CppBase() + 0x1E91974))(0, group);
	}

};

