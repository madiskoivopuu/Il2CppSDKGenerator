#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1530
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass153_0"));
	}

	template <typename T = IronSourceError*> T& ironsourceError() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T registerInterstitialEventsb__11() {
		return ((T (*)(cDisplayClass1530*))(Il2CppBase() + 0x1152F70))(this);
	}

};

