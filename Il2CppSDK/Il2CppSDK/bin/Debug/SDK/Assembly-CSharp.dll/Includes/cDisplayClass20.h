#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass20
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass2_0"));
	}

	template <typename R = Il2CppString*> R& name() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = bool> R Containsb__0(Il2CppString* t) {
		return ((R (*)(cDisplayClass20*, Il2CppString*))(Il2CppBase() + 0x10BC414))(this, t);
	}

};

