#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FuelItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FuelItem"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& Time() {
		return *(R*)((uintptr_t)this + 0x8);
	}


};
