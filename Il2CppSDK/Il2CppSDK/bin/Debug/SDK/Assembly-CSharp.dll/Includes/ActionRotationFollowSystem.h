#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionRotationFollowSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionRotationFollowSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _actions() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(ActionRotationFollowSystem*))(Il2CppBase() + 0x18AB15C))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(ActionRotationFollowSystem*))(Il2CppBase() + 0x18AB45C))(this);
	}

};

}
