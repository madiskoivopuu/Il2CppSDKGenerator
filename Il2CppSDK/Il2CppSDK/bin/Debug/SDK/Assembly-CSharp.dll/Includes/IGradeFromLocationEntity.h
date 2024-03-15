#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGradeFromLocationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGradeFromLocationEntity"));
	}


	template <typename R = GradeFromLocationComponent*> R get_gradeFromLocation() {
		return ((R (*)(IGradeFromLocationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasGradeFromLocation() {
		return ((R (*)(IGradeFromLocationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddGradeFromLocation(int32_t newOffset) {
		return ((R (*)(IGradeFromLocationEntity*, int32_t))(Il2CppBase() + 0x0))(this, newOffset);
	}
	template <typename R = void> R ReplaceGradeFromLocation(int32_t newOffset) {
		return ((R (*)(IGradeFromLocationEntity*, int32_t))(Il2CppBase() + 0x0))(this, newOffset);
	}
	template <typename R = void> R RemoveGradeFromLocation() {
		return ((R (*)(IGradeFromLocationEntity*))(Il2CppBase() + 0x0))(this);
	}

};

