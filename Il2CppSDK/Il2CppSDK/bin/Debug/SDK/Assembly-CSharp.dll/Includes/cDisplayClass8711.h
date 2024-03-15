#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T>
class cDisplayClass8711
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass87_1`1"));
	}

	 T& val() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	 cDisplayClass8701<T>*& CS$8__locals1() {
		return *(cDisplayClass8701<T>**)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R ToOnGameThreadb__2() {
		return ((R (*)(cDisplayClass8711*))(Il2CppBase() + 0x0))(this);
	}

};

