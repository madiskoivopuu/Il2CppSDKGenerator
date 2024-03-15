#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnumExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnumExtensions"));
	}


	 static IEnumerable1uintptr_t>* GetFlags(uintptr_t value) {
		return ((IEnumerable1uintptr_t>* (*)(void *, uintptr_t))(Il2CppBase() + 0x137ADF8))(0, value);
	}
	 static IEnumerable1uintptr_t>* GetIndividualFlags(uintptr_t value) {
		return ((IEnumerable1uintptr_t>* (*)(void *, uintptr_t))(Il2CppBase() + 0x137B1E8))(0, value);
	}
	 static IEnumerable1uintptr_t>* GetFlags_1(uintptr_t value, Il2CppArray<uintptr_t>* values) {
		return ((IEnumerable1uintptr_t>* (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x137AEBC))(0, value, values);
	}
	 static IEnumerable1uintptr_t>* GetFlagValues(uintptr_t enumType) {
		return ((IEnumerable1uintptr_t>* (*)(void *, uintptr_t))(Il2CppBase() + 0x137B254))(0, enumType);
	}

};

