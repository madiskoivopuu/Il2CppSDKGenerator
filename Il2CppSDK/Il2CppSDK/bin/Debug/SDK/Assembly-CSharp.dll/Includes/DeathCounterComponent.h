#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DeathCounterComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeathCounterComponent"));
	}

	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Timer() {
		return *(R*)((uintptr_t)this + 0x14);
	}


};

