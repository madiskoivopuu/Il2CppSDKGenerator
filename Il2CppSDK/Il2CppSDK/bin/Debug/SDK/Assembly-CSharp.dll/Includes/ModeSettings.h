#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModeSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModeSettings"));
	}

	template <typename R = Mode> R& Mode() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& Button() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = uintptr_t> R& Description() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& Info() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Power() {
		return *(R*)((uintptr_t)this + 0x20);
	}


};

