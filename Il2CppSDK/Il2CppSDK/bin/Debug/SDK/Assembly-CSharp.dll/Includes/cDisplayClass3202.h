#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T1, typename T2>
class cDisplayClass3202
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass32_0`2"));
	}

	 Action2<T1, T2>*& toConvert() {
		return *(Action2<T1, T2>**)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R ToOnGameThreadb__0(T1 val1, T2 val2) {
		return ((R (*)(cDisplayClass3202*, T1, T2))(Il2CppBase() + 0x0))(this, val1, val2);
	}

};

