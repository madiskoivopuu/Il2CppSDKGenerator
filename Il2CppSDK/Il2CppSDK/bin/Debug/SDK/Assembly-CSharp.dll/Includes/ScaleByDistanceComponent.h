#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScaleByDistanceComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScaleByDistanceComponent"));
	}

	template <typename T = float> T& MaxDistance() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& MaxDamageCoef() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& MaxDurationCoef() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ScaleByDistanceComponent*, Il2CppObject*))(Il2CppBase() + 0x1356F8C))(this, target);
	}

};

