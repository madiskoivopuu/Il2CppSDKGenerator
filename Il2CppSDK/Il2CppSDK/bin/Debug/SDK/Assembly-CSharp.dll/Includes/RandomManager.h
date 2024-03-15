#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RandomManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomManager"));
	}

	template <typename R = GameRandom*> R& _random() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = float> R get_value() {
		return ((R (*)(RandomManager*))(Il2CppBase() + 0x17186F8))(this);
	}
	template <typename R = float> R Range(float min, float max) {
		return ((R (*)(RandomManager*, float, float))(Il2CppBase() + 0x1718724))(this, min, max);
	}
	template <typename R = int32_t> R Range_1(int32_t min, int32_t max) {
		return ((R (*)(RandomManager*, int32_t, int32_t))(Il2CppBase() + 0x1718754))(this, min, max);
	}
	template <typename R = int32_t> R Range_2(int32_t max) {
		return ((R (*)(RandomManager*, int32_t))(Il2CppBase() + 0x1718770))(this, max);
	}

};

