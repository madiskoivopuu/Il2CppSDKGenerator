#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1531
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass153_1"));
	}

	template <typename R = IronSourceError*> R& ironSourceError() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R registerInterstitialEventsb__12() {
		return ((R (*)(cDisplayClass1531*))(Il2CppBase() + 0x1152FEC))(this);
	}

};

