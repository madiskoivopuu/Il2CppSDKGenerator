#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StubProduct
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StubProduct"));
	}

	template <typename T = Il2CppString*> T& GooglePrice() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& USDPrice() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

