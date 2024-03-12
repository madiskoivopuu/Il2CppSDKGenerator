#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1600
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass160_0"));
	}

	template <typename T = uintptr_t> T& IronSourceError() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T registerRewardedVideoManualEventsb__3() {
		return ((T (*)(cDisplayClass1600*))(Il2CppBase() + 0x1153B8C))(this);
	}

};

}
