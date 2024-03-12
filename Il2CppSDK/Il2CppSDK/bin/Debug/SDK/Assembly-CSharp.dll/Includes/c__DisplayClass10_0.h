#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass100
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass10_0"));
	}

	template <typename T = uintptr_t> T& action() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T RunCoroutineb__0() {
		return ((T (*)(cDisplayClass100*))(Il2CppBase() + 0x10B03E4))(this);
	}

};

}
