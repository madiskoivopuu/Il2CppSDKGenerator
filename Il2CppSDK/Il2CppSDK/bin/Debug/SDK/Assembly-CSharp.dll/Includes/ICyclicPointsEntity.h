#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICyclicPointsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICyclicPointsEntity"));
	}


	template <typename R = CyclicPointsComponent*> R get_cyclicPoints() {
		return ((R (*)(ICyclicPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCyclicPoints() {
		return ((R (*)(ICyclicPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCyclicPoints(int32_t newCount) {
		return ((R (*)(ICyclicPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R ReplaceCyclicPoints(int32_t newCount) {
		return ((R (*)(ICyclicPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R RemoveCyclicPoints() {
		return ((R (*)(ICyclicPointsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

