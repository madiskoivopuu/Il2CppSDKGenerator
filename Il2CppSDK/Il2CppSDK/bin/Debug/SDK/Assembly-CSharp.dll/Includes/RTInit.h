#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RTInit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RTInit"));
	}

	template <typename R = uintptr_t> R& RT_WeatherFX() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Start() {
		return ((R (*)(RTInit*))(Il2CppBase() + 0x170CE48))(this);
	}

};

