#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMaxHealthCoefByGradeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMaxHealthCoefByGradeEntity"));
	}


	template <typename R = MaxHealthCoefByGradeComponent*> R get_maxHealthCoefByGrade() {
		return ((R (*)(IMaxHealthCoefByGradeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMaxHealthCoefByGrade() {
		return ((R (*)(IMaxHealthCoefByGradeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMaxHealthCoefByGrade(Il2CppArray<float>* newValues) {
		return ((R (*)(IMaxHealthCoefByGradeEntity*, Il2CppArray<float>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename R = void> R ReplaceMaxHealthCoefByGrade(Il2CppArray<float>* newValues) {
		return ((R (*)(IMaxHealthCoefByGradeEntity*, Il2CppArray<float>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename R = void> R RemoveMaxHealthCoefByGrade() {
		return ((R (*)(IMaxHealthCoefByGradeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

