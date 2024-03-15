#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass181
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass18_1"));
	}

	template <typename R = uintptr_t> R& taskGetPlayer() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& taskIsCaptureSupported() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = cDisplayClass180*> R& CS$8__locals1() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Authenticateb__1(uintptr_t completeTask) {
		return ((R (*)(cDisplayClass181*, uintptr_t))(Il2CppBase() + 0x113A7B8))(this, completeTask);
	}

};

