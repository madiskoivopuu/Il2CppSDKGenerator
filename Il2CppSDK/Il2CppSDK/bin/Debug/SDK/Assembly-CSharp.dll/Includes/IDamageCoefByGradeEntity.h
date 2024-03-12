#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageCoefByGradeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageCoefByGradeEntity"));
	}


	template <typename T = uintptr_t> T get_damageCoefByGrade() {
		return ((T (*)(IDamageCoefByGradeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDamageCoefByGrade() {
		return ((T (*)(IDamageCoefByGradeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDamageCoefByGrade(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(IDamageCoefByGradeEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename T = void> T ReplaceDamageCoefByGrade(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(IDamageCoefByGradeEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename T = void> T RemoveDamageCoefByGrade() {
		return ((T (*)(IDamageCoefByGradeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
