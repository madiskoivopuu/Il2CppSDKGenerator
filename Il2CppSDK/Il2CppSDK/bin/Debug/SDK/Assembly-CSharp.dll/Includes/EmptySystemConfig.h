#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EmptySystemConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EmptySystemConfig"));
	}

	template <typename R = uintptr_t> R& _systems() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(EmptySystemConfig*))(Il2CppBase() + 0x137034C))(this);
	}
	template <typename R = uintptr_t> R GetSystems() {
		return ((R (*)(EmptySystemConfig*))(Il2CppBase() + 0x13703C8))(this);
	}

};

