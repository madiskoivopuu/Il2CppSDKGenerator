#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaterfallConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WaterfallConfiguration"));
	}

	template <typename T = Nullable1double>*> T& ceiling() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Nullable1double>*> T& floor() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Nullable1double>*> T get_Ceiling() {
		return ((T (*)(WaterfallConfiguration*))(Il2CppBase() + 0x112D634))(this);
	}
	template <typename T = Nullable1double>*> T get_Floor() {
		return ((T (*)(WaterfallConfiguration*))(Il2CppBase() + 0x112D640))(this);
	}
	template <typename T = WaterfallConfigurationBuilder*> static T Builder() {
		return ((T (*)(void *))(Il2CppBase() + 0x112D698))(0);
	}
	template <typename T = WaterfallConfiguration*> static T Empty() {
		return ((T (*)(void *))(Il2CppBase() + 0x112D6F0))(0);
	}

};

