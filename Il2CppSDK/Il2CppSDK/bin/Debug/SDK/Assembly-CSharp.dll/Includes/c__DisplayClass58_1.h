#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass581
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass58_1"));
	}

	template <typename T = uintptr_t> T& status() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T GetUiSignOutCallbackOnGameThreadb__1() {
		return ((T (*)(cDisplayClass581*))(Il2CppBase() + 0x113F0E0))(this);
	}

};

}
