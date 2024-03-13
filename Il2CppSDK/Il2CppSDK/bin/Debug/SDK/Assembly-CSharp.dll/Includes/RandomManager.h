#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RandomManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomManager"));
	}

	template <typename T = GameRandom*> T& _random() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = float> T get_value() {
		return ((T (*)(RandomManager*))(Il2CppBase() + 0x17186F8))(this);
	}
	template <typename T = float> T Range(float min, float max) {
		return ((T (*)(RandomManager*, float, float))(Il2CppBase() + 0x1718724))(this, min, max);
	}
	template <typename T = int32_t> T Range_1(int32_t min, int32_t max) {
		return ((T (*)(RandomManager*, int32_t, int32_t))(Il2CppBase() + 0x1718754))(this, min, max);
	}
	template <typename T = int32_t> T Range_2(int32_t max) {
		return ((T (*)(RandomManager*, int32_t))(Il2CppBase() + 0x1718770))(this, max);
	}

};

