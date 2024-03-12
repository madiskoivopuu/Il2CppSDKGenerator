#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerState"));
	}

	template <typename T = uintptr_t> static T& Default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& Hunger() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& Thirst() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppString*> T& EndId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> static T GetDefaultCopy() {
		return ((T (*)(void *))(Il2CppBase() + 0x156F200))(0);
	}

};

}
