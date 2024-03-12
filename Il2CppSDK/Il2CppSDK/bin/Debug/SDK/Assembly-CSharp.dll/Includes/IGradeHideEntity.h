#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGradeHideEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGradeHideEntity"));
	}


	template <typename T = uintptr_t> T get_gradeHide() {
		return ((T (*)(IGradeHideEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasGradeHide() {
		return ((T (*)(IGradeHideEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddGradeHide(int32_t newValue) {
		return ((T (*)(IGradeHideEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceGradeHide(int32_t newValue) {
		return ((T (*)(IGradeHideEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveGradeHide() {
		return ((T (*)(IGradeHideEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
