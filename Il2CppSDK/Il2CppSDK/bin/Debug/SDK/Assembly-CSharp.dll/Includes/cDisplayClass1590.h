#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1590
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass159_0"));
	}

	template <typename T = IronSourcePlacement*> T& IronSourcePlacement() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T registerRewardedVideoEventsb__8() {
		return ((T (*)(cDisplayClass1590*))(Il2CppBase() + 0x115399C))(this);
	}

};

