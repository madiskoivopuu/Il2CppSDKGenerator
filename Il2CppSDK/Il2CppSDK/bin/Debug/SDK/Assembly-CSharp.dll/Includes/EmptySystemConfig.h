#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EmptySystemConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EmptySystemConfig"));
	}

	template <typename T = uintptr_t> T& _systems() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(EmptySystemConfig*))(Il2CppBase() + 0x137034C))(this);
	}
	template <typename T = uintptr_t> T GetSystems() {
		return ((T (*)(EmptySystemConfig*))(Il2CppBase() + 0x13703C8))(this);
	}

};

