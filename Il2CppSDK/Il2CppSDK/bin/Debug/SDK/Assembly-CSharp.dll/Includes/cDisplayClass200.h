#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass200
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass20_0"));
	}

	template <typename R = uintptr_t> R& callback() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R InvokeCallbackOnGameThreadb__0() {
		return ((R (*)(cDisplayClass200*))(Il2CppBase() + 0x113B4CC))(this);
	}

};

