#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass471
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass47_1"));
	}

	template <typename R = int32_t> R& button() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = cDisplayClass470*> R& CS$8__locals1() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R ShowOopsWindowb__1() {
		return ((R (*)(cDisplayClass471*))(Il2CppBase() + 0xEE81E4))(this);
	}

};

