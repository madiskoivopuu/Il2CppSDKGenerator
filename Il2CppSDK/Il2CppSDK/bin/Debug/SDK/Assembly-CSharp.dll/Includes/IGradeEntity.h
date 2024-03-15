#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGradeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGradeEntity"));
	}


	template <typename R = GradeComponent*> R get_grade() {
		return ((R (*)(IGradeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasGrade() {
		return ((R (*)(IGradeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddGrade(int32_t newValue) {
		return ((R (*)(IGradeEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceGrade(int32_t newValue) {
		return ((R (*)(IGradeEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveGrade() {
		return ((R (*)(IGradeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

