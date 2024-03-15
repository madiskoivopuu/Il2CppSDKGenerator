#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass80
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass8_0"));
	}

	template <typename R = Il2CppString*> R& msg() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R db__0() {
		return ((R (*)(cDisplayClass80*))(Il2CppBase() + 0x1160E10))(this);
	}

};

