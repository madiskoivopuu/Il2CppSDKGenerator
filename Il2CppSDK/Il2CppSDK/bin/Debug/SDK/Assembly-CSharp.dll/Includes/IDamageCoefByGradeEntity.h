#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDamageCoefByGradeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDamageCoefByGradeEntity"));
	}


	template <typename R = DamageCoefByGradeComponent*> R get_damageCoefByGrade() {
		return ((R (*)(IDamageCoefByGradeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDamageCoefByGrade() {
		return ((R (*)(IDamageCoefByGradeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDamageCoefByGrade(Il2CppArray<float>* newValues) {
		return ((R (*)(IDamageCoefByGradeEntity*, Il2CppArray<float>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename R = void> R ReplaceDamageCoefByGrade(Il2CppArray<float>* newValues) {
		return ((R (*)(IDamageCoefByGradeEntity*, Il2CppArray<float>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename R = void> R RemoveDamageCoefByGrade() {
		return ((R (*)(IDamageCoefByGradeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

