#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass203
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass20_3"));
	}

	template <typename R = IronSourceAdInfo*> R& IronSourceAdInfo() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R registerBannerEventsb__9() {
		return ((R (*)(cDisplayClass203*))(Il2CppBase() + 0x114EEB8))(this);
	}

};

