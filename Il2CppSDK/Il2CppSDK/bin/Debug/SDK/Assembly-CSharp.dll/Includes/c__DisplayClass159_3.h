#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1593
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass159_3"));
	}

	template <typename T = bool> T& isAvailable() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T registerRewardedVideoEventsb__15() {
		return ((T (*)(cDisplayClass1593*))(Il2CppBase() + 0x1153B10))(this);
	}

};

}
