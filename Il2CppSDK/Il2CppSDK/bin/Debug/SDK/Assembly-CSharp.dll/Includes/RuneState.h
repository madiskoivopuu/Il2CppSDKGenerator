#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RuneState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneState"));
	}

	template <typename T = uintptr_t> T& Description() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& GradeSum() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& ChanceSum() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& MainValueSum() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
