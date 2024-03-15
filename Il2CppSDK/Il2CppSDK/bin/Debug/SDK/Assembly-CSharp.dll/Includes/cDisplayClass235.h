#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass235
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass23_5"));
	}

	template <typename R = IronSourceError*> R& ironSourceError() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = IronSourceAdInfo*> R& IronSourceAdInfo() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R registerInterstitialEventsb__12() {
		return ((R (*)(cDisplayClass235*))(Il2CppBase() + 0x1154868))(this);
	}

};

