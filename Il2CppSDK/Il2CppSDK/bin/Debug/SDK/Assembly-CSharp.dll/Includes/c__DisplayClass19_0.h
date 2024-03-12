#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass190
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass19_0"));
	}

	template <typename T = int32_t> T& n() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T RecycleTopToBottomb__0(uintptr_t cell) {
		return ((T (*)(cDisplayClass190*, uintptr_t))(Il2CppBase() + 0x22A5858))(this, cell);
	}

};

}
