#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGradeViewEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGradeViewEntity"));
	}


	template <typename T = GradeViewComponent*> T get_gradeView() {
		return ((T (*)(IGradeViewEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasGradeView() {
		return ((T (*)(IGradeViewEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddGradeView(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(IGradeViewEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename T = void> T ReplaceGradeView(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(IGradeViewEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newValues);
	}
	template <typename T = void> T RemoveGradeView() {
		return ((T (*)(IGradeViewEntity*))(Il2CppBase() + 0x0))(this);
	}

};

