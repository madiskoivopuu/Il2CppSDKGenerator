#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FogController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FogController"));
	}

	template <typename T = uintptr_t> T& _setting() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& _save() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(FogController*))(Il2CppBase() + 0x15F7C70))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(FogController*))(Il2CppBase() + 0x15F7D48))(this);
	}

};

}
