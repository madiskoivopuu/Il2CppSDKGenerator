#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass10
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass1_0"));
	}

	template <typename T = Action1bool>*> T& setter() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Bindb__0(bool value) {
		return ((T (*)(cDisplayClass10*, bool))(Il2CppBase() + 0x229F16C))(this, value);
	}

};

