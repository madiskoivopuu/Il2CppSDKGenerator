#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass301
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass30_1"));
	}

	template <typename R = IronSourceError*> R& IronSourceError() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = IronSourceAdInfo*> R& IronSourceAdInfo() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R registerRewardedVideoEventsb__8() {
		return ((R (*)(cDisplayClass301*))(Il2CppBase() + 0x115570C))(this);
	}

};

