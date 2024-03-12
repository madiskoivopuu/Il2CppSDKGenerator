#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass530
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass53_0"));
	}

	template <typename T = uintptr_t> T& room() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T UpdateRoomsb__1(uintptr_t d) {
		return ((T (*)(cDisplayClass530*, uintptr_t))(Il2CppBase() + 0x1119A70))(this, d);
	}

};

}
