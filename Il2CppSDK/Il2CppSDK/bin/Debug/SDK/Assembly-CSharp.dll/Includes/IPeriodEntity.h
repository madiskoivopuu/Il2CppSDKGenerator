#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPeriodEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPeriodEntity"));
	}


	template <typename T = PeriodComponent*> T get_period() {
		return ((T (*)(IPeriodEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPeriod() {
		return ((T (*)(IPeriodEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPeriod(float newValue) {
		return ((T (*)(IPeriodEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplacePeriod(float newValue) {
		return ((T (*)(IPeriodEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemovePeriod() {
		return ((T (*)(IPeriodEntity*))(Il2CppBase() + 0x0))(this);
	}

};

