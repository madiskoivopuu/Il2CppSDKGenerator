#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PowerByGradeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PowerByGradeComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(PowerByGradeComponent*, uintptr_t))(Il2CppBase() + 0x16DCD40))(this, target);
	}
	template <typename T = float> T GetValue(int32_t grade) {
		return ((T (*)(PowerByGradeComponent*, int32_t))(Il2CppBase() + 0x16DCDD8))(this, grade);
	}

};

}
