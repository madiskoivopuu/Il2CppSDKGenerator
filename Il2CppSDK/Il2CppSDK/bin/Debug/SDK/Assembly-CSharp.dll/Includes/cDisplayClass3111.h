#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T>
class cDisplayClass3111
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass31_1`1"));
	}

	 T& val() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	 cDisplayClass3101T>*& CS$8__locals1() {
		return *(cDisplayClass3101T>**)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R ToOnGameThreadb__1() {
		return ((R (*)(cDisplayClass3111*))(Il2CppBase() + 0x0))(this);
	}

};

