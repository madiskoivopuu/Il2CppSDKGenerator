#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MinimapViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MinimapViewSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _entities() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(MinimapViewSystem*))(Il2CppBase() + 0x1D69950))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(MinimapViewSystem*))(Il2CppBase() + 0x1D69A94))(this);
	}

};

}
