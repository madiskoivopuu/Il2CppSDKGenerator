#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GradeSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GradeSetting"));
	}

	template <typename R = Il2CppArray<float>*> R& GradeUpChanceForMount() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& RandomGroup() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& PriceForMount() {
		return *(R*)((uintptr_t)this + 0x20);
	}


};

