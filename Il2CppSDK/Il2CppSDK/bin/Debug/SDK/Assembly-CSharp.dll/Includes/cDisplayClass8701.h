#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass8701
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass87_0`1"));
	}

	template <typename T = Action1uintptr_t>*> T& toConvert() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T ToOnGameThreadb__1(uintptr_t val) {
		return ((T (*)(cDisplayClass8701*, uintptr_t))(Il2CppBase() + 0x0))(this, val);
	}

};

