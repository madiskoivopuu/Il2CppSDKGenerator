#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TotemToggle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TotemToggle"));
	}

	template <typename R = uintptr_t> R& Toggle() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Text() {
		return *(R*)((uintptr_t)this + 0x20);
	}


};

