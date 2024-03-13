#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass200
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass20_0"));
	}

	template <typename T = uintptr_t> T& callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T InvokeCallbackOnGameThreadb__0() {
		return ((T (*)(cDisplayClass200*))(Il2CppBase() + 0x113B4CC))(this);
	}

};

