#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RefreshTimeGroupcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RefreshTimeGroup>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& category() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t group) {
		return ((T (*)(RefreshTimeGroupcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x2A08C94))(this, group);
	}

};

}