#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass801
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass8_0`1"));
	}

	template <typename T = GameRandom*> T& random() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = int32_t> T RandomDailyCycleItemb__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(cDisplayClass801*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, a, b);
	}

};

