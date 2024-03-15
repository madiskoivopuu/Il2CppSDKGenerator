#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerState"));
	}

	template <typename R = PlayerState> static R& Default() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> R& Hunger() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& Thirst() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = Il2CppString*> R& EndId() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = PlayerState> static R GetDefaultCopy() {
		return ((R (*)(void *))(Il2CppBase() + 0x156F200))(0);
	}

};

