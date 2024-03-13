#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass301
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass30_1"));
	}

	template <typename T = IronSourceError*> T& IronSourceError() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = IronSourceAdInfo*> T& IronSourceAdInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T registerRewardedVideoEventsb__8() {
		return ((T (*)(cDisplayClass301*))(Il2CppBase() + 0x115570C))(this);
	}

};

