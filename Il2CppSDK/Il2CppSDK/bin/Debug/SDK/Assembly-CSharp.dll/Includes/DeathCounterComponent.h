#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DeathCounterComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeathCounterComponent"));
	}

	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Timer() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

