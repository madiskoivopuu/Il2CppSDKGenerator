#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StateViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StateViewSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _entities() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(StateViewSystem*))(Il2CppBase() + 0x148F624))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(StateViewSystem*))(Il2CppBase() + 0x148F768))(this);
	}
	template <typename T = void> T Update(uintptr_t actor, uintptr_t target, Il2CppArray<uintptr_t>* values, bool firstOf) {
		return ((T (*)(StateViewSystem*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x148F974))(this, actor, target, values, firstOf);
	}

};

}
