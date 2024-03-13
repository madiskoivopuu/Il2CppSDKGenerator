#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass2202
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass22_0`2"));
	}

	template <typename T = Action2uintptr_t, uintptr_t>*> T& toInvokeOnGameThread() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T AsOnGameThreadCallbackb__0(uintptr_t result1, uintptr_t result2) {
		return ((T (*)(cDisplayClass2202*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, result1, result2);
	}

};

