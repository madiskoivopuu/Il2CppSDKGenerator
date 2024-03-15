#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1590
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass159_0"));
	}

	template <typename R = IronSourcePlacement*> R& IronSourcePlacement() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R registerRewardedVideoEventsb__8() {
		return ((R (*)(cDisplayClass1590*))(Il2CppBase() + 0x115399C))(this);
	}

};

