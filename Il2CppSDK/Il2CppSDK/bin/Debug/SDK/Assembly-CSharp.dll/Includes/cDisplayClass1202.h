#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1202
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass12_0`2"));
	}

	template <typename T = Action2uintptr_t, uintptr_t>*> T& toConvert() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T ToOnGameThreadb__0(uintptr_t val1, uintptr_t val2) {
		return ((T (*)(cDisplayClass1202*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, val1, val2);
	}

};

