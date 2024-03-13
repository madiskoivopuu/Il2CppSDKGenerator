#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass303
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass30_3"));
	}

	template <typename T = IronSourceAdInfo*> T& IronSourceAdInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T registerRewardedVideoEventsb__10() {
		return ((T (*)(cDisplayClass303*))(Il2CppBase() + 0x1155804))(this);
	}

};

