#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass1901
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass19_0`1"));
	}

	template <typename T = Action1uintptr_t>*> T& callback() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T AsOnGameThreadCallbackb__1(uintptr_t result) {
		return ((T (*)(cDisplayClass1901*, uintptr_t))(Il2CppBase() + 0x0))(this, result);
	}

};

