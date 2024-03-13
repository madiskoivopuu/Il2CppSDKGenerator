#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass2302
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass23_0`2"));
	}

	template <typename T = Action2uintptr_t, uintptr_t>*> T& callback() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& t1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& t2() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T InvokeCallbackOnGameThreadb__0() {
		return ((T (*)(cDisplayClass2302*))(Il2CppBase() + 0x0))(this);
	}

};

