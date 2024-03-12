#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass208
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass20_8"));
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

	template <typename T = void> T Loginb__19() {
		return ((T (*)(cDisplayClass208*))(Il2CppBase() + 0x1119518))(this);
	}

};

}
