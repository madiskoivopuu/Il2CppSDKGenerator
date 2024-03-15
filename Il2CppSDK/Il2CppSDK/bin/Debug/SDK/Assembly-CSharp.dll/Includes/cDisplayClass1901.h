#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T>
class cDisplayClass1901
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass19_0`1"));
	}

	 Action1T>*& callback() {
		return *(Action1T>**)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R AsOnGameThreadCallbackb__1(T result) {
		return ((R (*)(cDisplayClass1901*, T))(Il2CppBase() + 0x0))(this, result);
	}

};

