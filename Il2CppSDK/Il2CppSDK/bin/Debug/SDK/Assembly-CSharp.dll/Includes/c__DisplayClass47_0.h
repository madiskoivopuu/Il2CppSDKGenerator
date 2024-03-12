#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass470
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass47_0"));
	}

	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T GetPlayerStatsb__0(uintptr_t annotatedData) {
		return ((T (*)(cDisplayClass470*, uintptr_t))(Il2CppBase() + 0x113C8F8))(this, annotatedData);
	}
	template <typename T = void> T GetPlayerStatsb__1(uintptr_t e) {
		return ((T (*)(cDisplayClass470*, uintptr_t))(Il2CppBase() + 0x113D310))(this, e);
	}

};

}
