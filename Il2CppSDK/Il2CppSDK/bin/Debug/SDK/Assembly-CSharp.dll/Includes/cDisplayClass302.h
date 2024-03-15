#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass302
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass30_2"));
	}

	template <typename R = IronSourceAdInfo*> R& IronSourceAdInfo() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R registerRewardedVideoEventsb__9() {
		return ((R (*)(cDisplayClass302*))(Il2CppBase() + 0x1155788))(this);
	}

};

