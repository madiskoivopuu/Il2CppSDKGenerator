#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MathHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MathHelper"));
	}


	template <typename R = int32_t> static R FloorToInt(float value) {
		return ((R (*)(void *, float))(Il2CppBase() + 0x12CD074))(0, value);
	}
	template <typename R = float> static R Lerp(float a, float b, float t) {
		return ((R (*)(void *, float, float, float))(Il2CppBase() + 0x12CD100))(0, a, b, t);
	}
	template <typename R = float> static R Clamp01(float value) {
		return ((R (*)(void *, float))(Il2CppBase() + 0x12CD124))(0, value);
	}
	template <typename R = float> static R Clamp(float value, float min, float max) {
		return ((R (*)(void *, float, float, float))(Il2CppBase() + 0x12CD13C))(0, value, min, max);
	}

};

