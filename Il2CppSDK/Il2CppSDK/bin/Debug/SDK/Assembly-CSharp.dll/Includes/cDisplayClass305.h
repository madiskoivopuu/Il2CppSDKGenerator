#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass305
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass30_5"));
	}

	template <typename T = IronSourceAdInfo*> T& IronSourceAdInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T registerRewardedVideoEventsb__12() {
		return ((T (*)(cDisplayClass305*))(Il2CppBase() + 0x11558FC))(this);
	}

};

