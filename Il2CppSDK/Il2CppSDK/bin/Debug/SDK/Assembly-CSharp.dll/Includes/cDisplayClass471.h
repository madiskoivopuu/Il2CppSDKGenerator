#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass471
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass47_1"));
	}

	template <typename T = int32_t> T& button() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = cDisplayClass470*> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T ShowOopsWindowb__1() {
		return ((T (*)(cDisplayClass471*))(Il2CppBase() + 0xEE81E4))(this);
	}

};

