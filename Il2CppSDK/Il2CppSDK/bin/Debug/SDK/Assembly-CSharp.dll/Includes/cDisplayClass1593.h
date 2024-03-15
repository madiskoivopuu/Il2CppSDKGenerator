#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1593
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass159_3"));
	}

	template <typename R = bool> R& isAvailable() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R registerRewardedVideoEventsb__15() {
		return ((R (*)(cDisplayClass1593*))(Il2CppBase() + 0x1153B10))(this);
	}

};

