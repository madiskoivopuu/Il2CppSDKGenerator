#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass204
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass20_4"));
	}

	template <typename R = IronSourceAdInfo*> R& IronSourceAdInfo() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R registerBannerEventsb__10() {
		return ((R (*)(cDisplayClass204*))(Il2CppBase() + 0x114EF3C))(this);
	}

};

