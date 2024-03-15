#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass231
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass23_1"));
	}

	template <typename R = IronSourceAdInfo*> R& IronSourceAdInfo() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R registerInterstitialEventsb__8() {
		return ((R (*)(cDisplayClass231*))(Il2CppBase() + 0x1154678))(this);
	}

};

