#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass2101
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass21_0`1"));
	}

	template <typename T = Action1uintptr_t>*> T& callback() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T InvokeCallbackOnGameThreadb__0() {
		return ((T (*)(cDisplayClass2101*))(Il2CppBase() + 0x0))(this);
	}

};

