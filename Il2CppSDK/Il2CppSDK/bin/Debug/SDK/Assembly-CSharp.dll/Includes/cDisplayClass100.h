#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass100
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass10_0"));
	}

	template <typename R = uintptr_t> R& action() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R RunCoroutineb__0() {
		return ((R (*)(cDisplayClass100*))(Il2CppBase() + 0x10B03E4))(this);
	}

};

