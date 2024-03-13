#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass304
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass30_4"));
	}

	template <typename T = IronSourcePlacement*> T& IronSourcePlacement() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = IronSourceAdInfo*> T& IronSourceAdInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T registerRewardedVideoEventsb__11() {
		return ((T (*)(cDisplayClass304*))(Il2CppBase() + 0x1155880))(this);
	}

};

