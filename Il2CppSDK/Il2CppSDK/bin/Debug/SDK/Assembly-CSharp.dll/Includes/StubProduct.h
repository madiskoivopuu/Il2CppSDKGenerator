#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StubProduct
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StubProduct"));
	}

	template <typename R = Il2CppString*> R& GooglePrice() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& USDPrice() {
		return *(R*)((uintptr_t)this + 0x8);
	}


};

