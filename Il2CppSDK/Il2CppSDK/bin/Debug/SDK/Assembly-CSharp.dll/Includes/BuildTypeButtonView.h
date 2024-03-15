#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuildTypeButtonView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuildTypeButtonView"));
	}

	template <typename R = uintptr_t> R& _active() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _passive() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Button() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R set_IsActive(bool value) {
		return ((R (*)(BuildTypeButtonView*, bool))(Il2CppBase() + 0x15A502C))(this, value);
	}

};

