#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaterfallConfigurationBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WaterfallConfigurationBuilder"));
	}

	template <typename T = Nullable1double>*> T& ceiling() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Nullable1double>*> T& floor() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = WaterfallConfigurationBuilder*> T SetCeiling(double ceiling) {
		return ((T (*)(WaterfallConfigurationBuilder*, double))(Il2CppBase() + 0x22A8070))(this, ceiling);
	}
	template <typename T = WaterfallConfigurationBuilder*> T SetFloor(double floor) {
		return ((T (*)(WaterfallConfigurationBuilder*, double))(Il2CppBase() + 0x22A80E8))(this, floor);
	}
	template <typename T = WaterfallConfiguration*> T Build() {
		return ((T (*)(WaterfallConfigurationBuilder*))(Il2CppBase() + 0x22A8160))(this);
	}

};

