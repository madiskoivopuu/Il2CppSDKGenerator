#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShieldViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShieldViewSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Execute() {
		return ((T (*)(ShieldViewSystem*))(Il2CppBase() + 0x1630708))(this);
	}

};

}
