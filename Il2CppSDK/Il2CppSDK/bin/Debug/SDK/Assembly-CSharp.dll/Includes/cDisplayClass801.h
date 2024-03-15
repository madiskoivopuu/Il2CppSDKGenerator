#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T>
class cDisplayClass801
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass8_0`1"));
	}

	template <typename R = GameRandom*> R& random() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = int32_t> R RandomDailyCycleItemb__0(T a, T b) {
		return ((R (*)(cDisplayClass801*, T, T))(Il2CppBase() + 0x0))(this, a, b);
	}

};

