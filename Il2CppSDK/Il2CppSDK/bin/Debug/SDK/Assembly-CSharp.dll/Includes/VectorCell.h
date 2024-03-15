#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VectorCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VectorCell"));
	}

	template <typename R = float> R& X() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& Y() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = int32_t> R& Distance() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R SetDistance(int32_t distance) {
		return ((R (*)(VectorCell*, int32_t))(Il2CppBase() + 0x22A5748))(this, distance);
	}
	template <typename R = void> R SetVector(float x, float y) {
		return ((R (*)(VectorCell*, float, float))(Il2CppBase() + 0x22A5750))(this, x, y);
	}
	template <typename R = void> R Reset() {
		return ((R (*)(VectorCell*))(Il2CppBase() + 0x22A5758))(this);
	}

};

