#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LevelTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LevelTime"));
	}

	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& Time() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
