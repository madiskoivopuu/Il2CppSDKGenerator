#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass232
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass23_2"));
	}

	template <typename T = uintptr_t> T& IronSourceAdInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T registerInterstitialEventsb__9() {
		return ((T (*)(cDisplayClass232*))(Il2CppBase() + 0x11546F4))(this);
	}

};

}
