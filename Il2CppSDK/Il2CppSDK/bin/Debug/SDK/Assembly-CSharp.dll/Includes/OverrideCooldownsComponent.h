#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OverrideCooldownsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OverrideCooldownsComponent"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, float>*> T& Data() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
