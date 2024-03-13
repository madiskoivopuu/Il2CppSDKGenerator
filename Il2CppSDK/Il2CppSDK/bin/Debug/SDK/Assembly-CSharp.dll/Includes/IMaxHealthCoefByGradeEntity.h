#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMaxHealthCoefByGradeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMaxHealthCoefByGradeEntity"));
	}


	template <typename T = MaxHealthCoefByGradeComponent*> T get_maxHealthCoefByGrade() {
		return ((T (*)(IMaxHealthCoefByGradeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMaxHealthCoefByGrade() {
		return ((T (*)(IMaxHealthCoefByGradeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMaxHealthCoefByGrade(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(IMaxHealthCoefByGradeEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename T = void> T ReplaceMaxHealthCoefByGrade(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(IMaxHealthCoefByGradeEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename T = void> T RemoveMaxHealthCoefByGrade() {
		return ((T (*)(IMaxHealthCoefByGradeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

