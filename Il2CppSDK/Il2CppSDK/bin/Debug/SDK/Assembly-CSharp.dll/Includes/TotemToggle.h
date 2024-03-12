#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TotemToggle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TotemToggle"));
	}

	template <typename T = uintptr_t> T& Toggle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Text() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
