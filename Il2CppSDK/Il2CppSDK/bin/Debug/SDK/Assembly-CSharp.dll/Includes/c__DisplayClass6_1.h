#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass61
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass6_1"));
	}

	template <typename T = uintptr_t> T& questView() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T UpdateViewb__2() {
		return ((T (*)(cDisplayClass61*))(Il2CppBase() + 0x10BEA94))(this);
	}
	template <typename T = void> T UpdateViewb__3() {
		return ((T (*)(cDisplayClass61*))(Il2CppBase() + 0x10BEAC4))(this);
	}

};

}
