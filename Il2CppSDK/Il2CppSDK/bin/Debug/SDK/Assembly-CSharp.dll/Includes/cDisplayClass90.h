#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass90
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass9_0"));
	}

	template <typename R = Il2CppString*> R& msg() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R wb__0() {
		return ((R (*)(cDisplayClass90*))(Il2CppBase() + 0x1160EFC))(this);
	}

};

