#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MaxDurabilityByGradeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MaxDurabilityByGradeComponent"));
	}

	template <typename R = Il2CppArray<int32_t>*> R& Values() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(MaxDurabilityByGradeComponent*, Il2CppObject*))(Il2CppBase() + 0x12CD160))(this, target);
	}
	template <typename R = int32_t> R GetValue(int32_t grade) {
		return ((R (*)(MaxDurabilityByGradeComponent*, int32_t))(Il2CppBase() + 0x12CD1F8))(this, grade);
	}

};

