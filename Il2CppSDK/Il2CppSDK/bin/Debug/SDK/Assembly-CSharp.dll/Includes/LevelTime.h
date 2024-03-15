#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LevelTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LevelTime"));
	}

	template <typename R = int32_t> R& Level() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& Time() {
		return *(R*)((uintptr_t)this + 0x4);
	}


};

