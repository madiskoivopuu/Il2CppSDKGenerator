#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass510
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass51_0"));
	}

	template <typename T = uintptr_t> T& account() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T ShowExistedPortalsb__0(uintptr_t p) {
		return ((T (*)(cDisplayClass510*, uintptr_t))(Il2CppBase() + 0x10BAE64))(this, p);
	}

};

}
