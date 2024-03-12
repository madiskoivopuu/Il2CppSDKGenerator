#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass235
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass23_5"));
	}

	template <typename T = uintptr_t> T& ironSourceError() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& IronSourceAdInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T registerInterstitialEventsb__12() {
		return ((T (*)(cDisplayClass235*))(Il2CppBase() + 0x1154868))(this);
	}

};

}
