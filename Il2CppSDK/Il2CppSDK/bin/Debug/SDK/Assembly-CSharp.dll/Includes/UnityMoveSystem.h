#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnityMoveSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnityMoveSystem"));
	}

	template <typename T = uintptr_t> T& _timeManager() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& _targets() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(UnityMoveSystem*))(Il2CppBase() + 0x1539A04))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(UnityMoveSystem*))(Il2CppBase() + 0x1539A80))(this);
	}

};

}
