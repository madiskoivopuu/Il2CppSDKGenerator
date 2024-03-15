#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1600
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass160_0"));
	}

	template <typename R = IronSourceError*> R& IronSourceError() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R registerRewardedVideoManualEventsb__3() {
		return ((R (*)(cDisplayClass1600*))(Il2CppBase() + 0x1153B8C))(this);
	}

};

