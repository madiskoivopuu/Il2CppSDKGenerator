#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass233
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass23_3"));
	}

	template <typename T = IronSourceAdInfo*> T& IronSourceAdInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T registerInterstitialEventsb__10() {
		return ((T (*)(cDisplayClass233*))(Il2CppBase() + 0x1154770))(this);
	}

};

