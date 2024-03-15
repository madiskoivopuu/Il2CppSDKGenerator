#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T>
class cDisplayClass8701
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass87_0`1"));
	}

	 Action1<T>*& toConvert() {
		return *(Action1<T>**)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R ToOnGameThreadb__1(T val) {
		return ((R (*)(cDisplayClass8701*, T))(Il2CppBase() + 0x0))(this, val);
	}

};

