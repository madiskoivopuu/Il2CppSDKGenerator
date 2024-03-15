#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPeriodEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPeriodEntity"));
	}


	template <typename R = PeriodComponent*> R get_period() {
		return ((R (*)(IPeriodEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPeriod() {
		return ((R (*)(IPeriodEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPeriod(float newValue) {
		return ((R (*)(IPeriodEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplacePeriod(float newValue) {
		return ((R (*)(IPeriodEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemovePeriod() {
		return ((R (*)(IPeriodEntity*))(Il2CppBase() + 0x0))(this);
	}

};

