#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRandomManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRandomManager"));
	}


	template <typename R = float> R get_value() {
		return ((R (*)(IRandomManager*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = float> R Range(float min, float max) {
		return ((R (*)(IRandomManager*, float, float))(Il2CppBase() + 0x0))(this, min, max);
	}
	template <typename R = int32_t> R Range_1(int32_t min, int32_t max) {
		return ((R (*)(IRandomManager*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, min, max);
	}
	template <typename R = int32_t> R Range_2(int32_t max) {
		return ((R (*)(IRandomManager*, int32_t))(Il2CppBase() + 0x0))(this, max);
	}

};

