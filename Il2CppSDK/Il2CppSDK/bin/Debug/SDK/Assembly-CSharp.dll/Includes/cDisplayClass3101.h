#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T>
class cDisplayClass3101
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass31_0`1"));
	}

	 Action1T>*& toConvert() {
		return *(Action1T>**)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R ToOnGameThreadb__0(T val) {
		return ((R (*)(cDisplayClass3101*, T))(Il2CppBase() + 0x0))(this, val);
	}

};

