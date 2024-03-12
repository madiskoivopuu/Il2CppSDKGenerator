#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass400
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass40_0"));
	}

	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T AcquireDicedItemsb__0(uintptr_t r) {
		return ((T (*)(cDisplayClass400*, uintptr_t))(Il2CppBase() + 0x10CD61C))(this, r);
	}

};

}
