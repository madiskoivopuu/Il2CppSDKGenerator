#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass205
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass20_5"));
	}

	template <typename R = IronSourceAdInfo*> R& IronSourceAdInfo() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R registerBannerEventsb__11() {
		return ((R (*)(cDisplayClass205*))(Il2CppBase() + 0x114EFC0))(this);
	}

};

