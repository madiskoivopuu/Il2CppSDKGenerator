#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRandomManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRandomManager"));
	}


	template <typename T = float> T get_value() {
		return ((T (*)(IRandomManager*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T Range(float min, float max) {
		return ((T (*)(IRandomManager*, float, float))(Il2CppBase() + 0x0))(this, min, max);
	}
	template <typename T = int32_t> T Range_1(int32_t min, int32_t max) {
		return ((T (*)(IRandomManager*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, min, max);
	}
	template <typename T = int32_t> T Range_2(int32_t max) {
		return ((T (*)(IRandomManager*, int32_t))(Il2CppBase() + 0x0))(this, max);
	}

};

}
