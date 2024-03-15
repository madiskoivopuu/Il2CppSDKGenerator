#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RuneState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneState"));
	}

	template <typename R = RuneDescriptionComponent*> R& Description() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& GradeSum() {
		return *(R*)((uintptr_t)this + 0xC);
	}
	template <typename R = float> R& ChanceSum() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& MainValueSum() {
		return *(R*)((uintptr_t)this + 0x14);
	}


};

