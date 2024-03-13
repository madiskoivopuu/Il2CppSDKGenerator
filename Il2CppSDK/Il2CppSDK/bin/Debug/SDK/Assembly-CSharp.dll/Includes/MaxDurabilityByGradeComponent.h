#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MaxDurabilityByGradeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MaxDurabilityByGradeComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(MaxDurabilityByGradeComponent*, Il2CppObject*))(Il2CppBase() + 0x12CD160))(this, target);
	}
	template <typename T = int32_t> T GetValue(int32_t grade) {
		return ((T (*)(MaxDurabilityByGradeComponent*, int32_t))(Il2CppBase() + 0x12CD1F8))(this, grade);
	}

};

