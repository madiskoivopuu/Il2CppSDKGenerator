#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass236
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass23_6"));
	}

	template <typename T = IronSourceAdInfo*> T& IronSourceAdInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T registerInterstitialEventsb__13() {
		return ((T (*)(cDisplayClass236*))(Il2CppBase() + 0x11548E4))(this);
	}

};

