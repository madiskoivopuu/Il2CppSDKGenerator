#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICyclicPointsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICyclicPointsEntity"));
	}


	template <typename T = uintptr_t> T get_cyclicPoints() {
		return ((T (*)(ICyclicPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCyclicPoints() {
		return ((T (*)(ICyclicPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCyclicPoints(int32_t newCount) {
		return ((T (*)(ICyclicPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T ReplaceCyclicPoints(int32_t newCount) {
		return ((T (*)(ICyclicPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T RemoveCyclicPoints() {
		return ((T (*)(ICyclicPointsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
