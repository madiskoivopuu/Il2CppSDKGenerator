#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass310
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass31_0"));
	}

	template <typename R = IronSourceAdInfo*> R& IronSourceAdInfo() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R registerRewardedVideoManualEventsb__2() {
		return ((R (*)(cDisplayClass310*))(Il2CppBase() + 0x1155978))(this);
	}

};

