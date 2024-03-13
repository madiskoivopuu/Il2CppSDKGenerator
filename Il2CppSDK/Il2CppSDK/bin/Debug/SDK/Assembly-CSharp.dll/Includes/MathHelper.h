#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MathHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MathHelper"));
	}


	template <typename T = int32_t> static T FloorToInt(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x12CD074))(0, value);
	}
	template <typename T = float> static T Lerp(float a, float b, float t) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x12CD100))(0, a, b, t);
	}
	template <typename T = float> static T Clamp01(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x12CD124))(0, value);
	}
	template <typename T = float> static T Clamp(float value, float min, float max) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x12CD13C))(0, value, min, max);
	}

};

