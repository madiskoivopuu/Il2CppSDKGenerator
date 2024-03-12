#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MinimapPingSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MinimapPingSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _entities() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _entitiesToDestroy() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(MinimapPingSystem*))(Il2CppBase() + 0x12D3D0C))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(MinimapPingSystem*))(Il2CppBase() + 0x12D3E10))(this);
	}

};

}
