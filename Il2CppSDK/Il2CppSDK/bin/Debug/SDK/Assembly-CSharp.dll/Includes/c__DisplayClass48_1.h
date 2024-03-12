#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass481
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass48_1"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T LoadUsersb__1(uintptr_t exception) {
		return ((T (*)(cDisplayClass481*, uintptr_t))(Il2CppBase() + 0x113D9C0))(this, exception);
	}

};

}
