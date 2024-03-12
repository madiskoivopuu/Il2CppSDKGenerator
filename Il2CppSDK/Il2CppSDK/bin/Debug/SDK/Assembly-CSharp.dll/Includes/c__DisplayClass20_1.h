#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass201
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass20_1"));
	}

	template <typename T = uintptr_t> T& sender() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& args() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Loginb__12() {
		return ((T (*)(cDisplayClass201*))(Il2CppBase() + 0x11193B8))(this);
	}

};

}
