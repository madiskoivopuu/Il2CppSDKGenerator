#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDefaultGradeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDefaultGradeEntity"));
	}


	template <typename R = DefaultGradeComponent*> R get_defaultGrade() {
		return ((R (*)(IDefaultGradeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDefaultGrade() {
		return ((R (*)(IDefaultGradeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDefaultGrade(int32_t newValue) {
		return ((R (*)(IDefaultGradeEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceDefaultGrade(int32_t newValue) {
		return ((R (*)(IDefaultGradeEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveDefaultGrade() {
		return ((R (*)(IDefaultGradeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

