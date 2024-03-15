#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGradeViewEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGradeViewEntity"));
	}


	template <typename R = GradeViewComponent*> R get_gradeView() {
		return ((R (*)(IGradeViewEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasGradeView() {
		return ((R (*)(IGradeViewEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddGradeView(Il2CppArray<int32_t>* newValues) {
		return ((R (*)(IGradeViewEntity*, Il2CppArray<int32_t>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename R = void> R ReplaceGradeView(Il2CppArray<int32_t>* newValues) {
		return ((R (*)(IGradeViewEntity*, Il2CppArray<int32_t>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename R = void> R RemoveGradeView() {
		return ((R (*)(IGradeViewEntity*))(Il2CppBase() + 0x0))(this);
	}

};

