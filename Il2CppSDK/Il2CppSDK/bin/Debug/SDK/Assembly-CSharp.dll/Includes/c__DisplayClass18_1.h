#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass181
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass18_1"));
	}

	template <typename T = uintptr_t> T& taskGetPlayer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& taskIsCaptureSupported() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Authenticateb__1(uintptr_t completeTask) {
		return ((T (*)(cDisplayClass181*, uintptr_t))(Il2CppBase() + 0x113A7B8))(this, completeTask);
	}

};

}
