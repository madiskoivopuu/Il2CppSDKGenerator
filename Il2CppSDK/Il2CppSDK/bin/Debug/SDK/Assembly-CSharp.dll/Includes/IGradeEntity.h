#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGradeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGradeEntity"));
	}


	template <typename T = uintptr_t> T get_grade() {
		return ((T (*)(IGradeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasGrade() {
		return ((T (*)(IGradeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddGrade(int32_t newValue) {
		return ((T (*)(IGradeEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceGrade(int32_t newValue) {
		return ((T (*)(IGradeEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveGrade() {
		return ((T (*)(IGradeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
