#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass236
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass23_6"));
	}

	template <typename R = IronSourceAdInfo*> R& IronSourceAdInfo() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R registerInterstitialEventsb__13() {
		return ((R (*)(cDisplayClass236*))(Il2CppBase() + 0x11548E4))(this);
	}

};

