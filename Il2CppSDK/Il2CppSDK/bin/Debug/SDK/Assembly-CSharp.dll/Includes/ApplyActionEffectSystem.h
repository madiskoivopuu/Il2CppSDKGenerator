#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyActionEffectSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyActionEffectSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(ApplyActionEffectSystem*, void*))(Il2CppBase() + 0x1892E6C))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(ApplyActionEffectSystem*, uintptr_t))(Il2CppBase() + 0x1892FD0))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(ApplyActionEffectSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x189301C))(this, entities);
	}

};

}
