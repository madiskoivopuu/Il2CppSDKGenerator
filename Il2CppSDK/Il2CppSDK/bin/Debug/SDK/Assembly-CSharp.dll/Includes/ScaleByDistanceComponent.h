#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScaleByDistanceComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScaleByDistanceComponent"));
	}

	template <typename R = float> R& MaxDistance() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& MaxDamageCoef() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = float> R& MaxDurationCoef() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ScaleByDistanceComponent*, Il2CppObject*))(Il2CppBase() + 0x1356F8C))(this, target);
	}

};

