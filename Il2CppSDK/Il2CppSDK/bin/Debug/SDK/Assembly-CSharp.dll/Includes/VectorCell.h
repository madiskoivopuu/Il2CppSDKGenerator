#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VectorCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VectorCell"));
	}

	template <typename T = float> T& X() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& Y() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& Distance() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T SetDistance(int32_t distance) {
		return ((T (*)(VectorCell*, int32_t))(Il2CppBase() + 0x22A5748))(this, distance);
	}
	template <typename T = void> T SetVector(float x, float y) {
		return ((T (*)(VectorCell*, float, float))(Il2CppBase() + 0x22A5750))(this, x, y);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(VectorCell*))(Il2CppBase() + 0x22A5758))(this);
	}

};

}
