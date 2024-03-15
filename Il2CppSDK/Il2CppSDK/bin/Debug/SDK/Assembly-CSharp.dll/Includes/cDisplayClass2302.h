#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T1, typename T2>
class cDisplayClass2302
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass23_0`2"));
	}

	 Action2<T1, T2>*& callback() {
		return *(Action2<T1, T2>**)((uintptr_t)this + 0x0);
	}
	 T1& t1() {
		return *(T1*)((uintptr_t)this + 0x0);
	}
	 T2& t2() {
		return *(T2*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R InvokeCallbackOnGameThreadb__0() {
		return ((R (*)(cDisplayClass2302*))(Il2CppBase() + 0x0))(this);
	}

};

