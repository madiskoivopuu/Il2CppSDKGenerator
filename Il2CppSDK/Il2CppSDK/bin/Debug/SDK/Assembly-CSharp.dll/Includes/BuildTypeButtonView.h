#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuildTypeButtonView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuildTypeButtonView"));
	}

	template <typename T = uintptr_t> T& _active() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _passive() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Button() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T set_IsActive(bool value) {
		return ((T (*)(BuildTypeButtonView*, bool))(Il2CppBase() + 0x15A502C))(this, value);
	}

};

