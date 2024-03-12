#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RTInit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RTInit"));
	}

	template <typename T = uintptr_t> T& RT_WeatherFX() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RTInit*))(Il2CppBase() + 0x170CE48))(this);
	}

};

}
