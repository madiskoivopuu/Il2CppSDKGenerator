#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaterfallConfigurationBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WaterfallConfigurationBuilder"));
	}

	 Nullable1<double>*& ceiling() {
		return *(Nullable1<double>**)((uintptr_t)this + 0x10);
	}
	 Nullable1<double>*& floor() {
		return *(Nullable1<double>**)((uintptr_t)this + 0x20);
	}

	template <typename R = WaterfallConfigurationBuilder*> R SetCeiling(double ceiling) {
		return ((R (*)(WaterfallConfigurationBuilder*, double))(Il2CppBase() + 0x22A8070))(this, ceiling);
	}
	template <typename R = WaterfallConfigurationBuilder*> R SetFloor(double floor) {
		return ((R (*)(WaterfallConfigurationBuilder*, double))(Il2CppBase() + 0x22A80E8))(this, floor);
	}
	template <typename R = WaterfallConfiguration*> R Build() {
		return ((R (*)(WaterfallConfigurationBuilder*))(Il2CppBase() + 0x22A8160))(this);
	}

};

