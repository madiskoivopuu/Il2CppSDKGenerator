#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDefaultGradeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDefaultGradeEntity"));
	}


	template <typename T = uintptr_t> T get_defaultGrade() {
		return ((T (*)(IDefaultGradeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDefaultGrade() {
		return ((T (*)(IDefaultGradeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDefaultGrade(int32_t newValue) {
		return ((T (*)(IDefaultGradeEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceDefaultGrade(int32_t newValue) {
		return ((T (*)(IDefaultGradeEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveDefaultGrade() {
		return ((T (*)(IDefaultGradeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
