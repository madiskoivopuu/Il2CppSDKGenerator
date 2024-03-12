#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FollowSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FollowSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _followers() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(FollowSystem*))(Il2CppBase() + 0x15F9DAC))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(FollowSystem*))(Il2CppBase() + 0x15F9E28))(this);
	}

};

}
