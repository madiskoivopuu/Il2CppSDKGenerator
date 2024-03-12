#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass560
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass56_0"));
	}

	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T UpdateInventoryb__0(void* i) {
		return ((T (*)(cDisplayClass560*, void*))(Il2CppBase() + 0x10A7D24))(this, i);
	}

};

}
