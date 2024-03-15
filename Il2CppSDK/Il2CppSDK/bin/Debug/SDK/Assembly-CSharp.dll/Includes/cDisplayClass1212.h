#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T1, typename T2>
class cDisplayClass1212
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass12_1`2"));
	}

	 T1& val1() {
		return *(T1*)((uintptr_t)this + 0x0);
	}
	 T2& val2() {
		return *(T2*)((uintptr_t)this + 0x0);
	}
	 cDisplayClass1202<T1, T2>*& CS$8__locals1() {
		return *(cDisplayClass1202<T1, T2>**)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R ToOnGameThreadb__1() {
		return ((R (*)(cDisplayClass1212*))(Il2CppBase() + 0x0))(this);
	}

};

