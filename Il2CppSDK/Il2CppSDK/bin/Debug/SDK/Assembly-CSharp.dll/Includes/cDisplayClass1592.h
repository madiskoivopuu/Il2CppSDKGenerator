#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1592
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass159_2"));
	}

	template <typename R = IronSourcePlacement*> R& IronSourcePlacement() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R registerRewardedVideoEventsb__14() {
		return ((R (*)(cDisplayClass1592*))(Il2CppBase() + 0x1153A94))(this);
	}

};

