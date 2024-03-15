#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGradeHideEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGradeHideEntity"));
	}


	template <typename R = GradeHideComponent*> R get_gradeHide() {
		return ((R (*)(IGradeHideEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasGradeHide() {
		return ((R (*)(IGradeHideEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddGradeHide(int32_t newValue) {
		return ((R (*)(IGradeHideEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceGradeHide(int32_t newValue) {
		return ((R (*)(IGradeHideEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveGradeHide() {
		return ((R (*)(IGradeHideEntity*))(Il2CppBase() + 0x0))(this);
	}

};

