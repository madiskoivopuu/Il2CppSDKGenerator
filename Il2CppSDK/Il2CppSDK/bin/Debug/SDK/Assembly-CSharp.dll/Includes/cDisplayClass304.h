#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass304
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass30_4"));
	}

	template <typename R = IronSourcePlacement*> R& IronSourcePlacement() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = IronSourceAdInfo*> R& IronSourceAdInfo() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R registerRewardedVideoEventsb__11() {
		return ((R (*)(cDisplayClass304*))(Il2CppBase() + 0x1155880))(this);
	}

};

