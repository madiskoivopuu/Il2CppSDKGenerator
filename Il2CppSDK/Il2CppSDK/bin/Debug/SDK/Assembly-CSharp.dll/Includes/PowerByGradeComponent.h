#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PowerByGradeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PowerByGradeComponent"));
	}

	template <typename R = Il2CppArray<float>*> R& Values() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(PowerByGradeComponent*, Il2CppObject*))(Il2CppBase() + 0x16DCD40))(this, target);
	}
	template <typename R = float> R GetValue(int32_t grade) {
		return ((R (*)(PowerByGradeComponent*, int32_t))(Il2CppBase() + 0x16DCDD8))(this, grade);
	}

};

