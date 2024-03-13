#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGradeFromLocationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGradeFromLocationEntity"));
	}


	template <typename T = GradeFromLocationComponent*> T get_gradeFromLocation() {
		return ((T (*)(IGradeFromLocationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasGradeFromLocation() {
		return ((T (*)(IGradeFromLocationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddGradeFromLocation(int32_t newOffset) {
		return ((T (*)(IGradeFromLocationEntity*, int32_t))(Il2CppBase() + 0x0))(this, newOffset);
	}
	template <typename T = void> T ReplaceGradeFromLocation(int32_t newOffset) {
		return ((T (*)(IGradeFromLocationEntity*, int32_t))(Il2CppBase() + 0x0))(this, newOffset);
	}
	template <typename T = void> T RemoveGradeFromLocation() {
		return ((T (*)(IGradeFromLocationEntity*))(Il2CppBase() + 0x0))(this);
	}

};

