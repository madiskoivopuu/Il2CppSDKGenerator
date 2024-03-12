#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FuelItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FuelItem"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& Time() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
