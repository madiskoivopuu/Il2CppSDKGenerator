#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass10
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass1_0"));
	}

	 Action1<bool>*& setter() {
		return *(Action1<bool>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Bindb__0(bool value) {
		return ((R (*)(cDisplayClass10*, bool))(Il2CppBase() + 0x229F16C))(this, value);
	}

};

