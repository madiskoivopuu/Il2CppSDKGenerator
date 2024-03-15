#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass300
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass30_0"));
	}

	template <typename R = IronSourcePlacement*> R& IronSourcePlacement() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = IronSourceAdInfo*> R& IronSourceAdInfo() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R registerRewardedVideoEventsb__7() {
		return ((R (*)(cDisplayClass300*))(Il2CppBase() + 0x1155690))(this);
	}

};

