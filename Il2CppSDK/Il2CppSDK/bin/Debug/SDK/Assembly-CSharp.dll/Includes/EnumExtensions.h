#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnumExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnumExtensions"));
	}


	template <typename T = IEnumerable1uintptr_t>*> static T GetFlags(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x137ADF8))(0, value);
	}
	template <typename T = IEnumerable1uintptr_t>*> static T GetIndividualFlags(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x137B1E8))(0, value);
	}
	template <typename T = IEnumerable1uintptr_t>*> static T GetFlags_1(uintptr_t value, Il2CppArray<uintptr_t>* values) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x137AEBC))(0, value, values);
	}
	template <typename T = IEnumerable1uintptr_t>*> static T GetFlagValues(uintptr_t enumType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x137B254))(0, enumType);
	}

};

