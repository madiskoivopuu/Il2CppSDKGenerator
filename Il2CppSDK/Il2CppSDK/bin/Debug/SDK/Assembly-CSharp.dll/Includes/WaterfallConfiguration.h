#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaterfallConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WaterfallConfiguration"));
	}

	 Nullable1double>*& ceiling() {
		return *(Nullable1double>**)((uintptr_t)this + 0x10);
	}
	 Nullable1double>*& floor() {
		return *(Nullable1double>**)((uintptr_t)this + 0x20);
	}

	 Nullable1double>* get_Ceiling() {
		return ((Nullable1double>* (*)(WaterfallConfiguration*))(Il2CppBase() + 0x112D634))(this);
	}
	 Nullable1double>* get_Floor() {
		return ((Nullable1double>* (*)(WaterfallConfiguration*))(Il2CppBase() + 0x112D640))(this);
	}
	template <typename R = WaterfallConfigurationBuilder*> static R Builder() {
		return ((R (*)(void *))(Il2CppBase() + 0x112D698))(0);
	}
	template <typename R = WaterfallConfiguration*> static R Empty() {
		return ((R (*)(void *))(Il2CppBase() + 0x112D6F0))(0);
	}

};

