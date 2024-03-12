#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GradeSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GradeSetting"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& GradeUpChanceForMount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& RandomGroup() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& PriceForMount() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
