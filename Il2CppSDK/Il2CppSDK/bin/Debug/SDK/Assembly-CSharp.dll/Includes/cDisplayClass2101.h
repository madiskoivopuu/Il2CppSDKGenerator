#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename T>
class cDisplayClass2101
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass21_0`1"));
	}

	 Action1T>*& callback() {
		return *(Action1T>**)((uintptr_t)this + 0x0);
	}
	 T& data() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R InvokeCallbackOnGameThreadb__0() {
		return ((R (*)(cDisplayClass2101*))(Il2CppBase() + 0x0))(this);
	}

};

