#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1531
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass153_1"));
	}

	template <typename T = IronSourceError*> T& ironSourceError() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T registerInterstitialEventsb__12() {
		return ((T (*)(cDisplayClass1531*))(Il2CppBase() + 0x1152FEC))(this);
	}

};

