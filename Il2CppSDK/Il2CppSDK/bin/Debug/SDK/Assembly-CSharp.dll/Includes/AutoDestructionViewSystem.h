#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoDestructionViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoDestructionViewSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(AutoDestructionViewSystem*, void*))(Il2CppBase() + 0x1A62A24))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(AutoDestructionViewSystem*, uintptr_t))(Il2CppBase() + 0x1A62A7C))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(AutoDestructionViewSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1A62AC8))(this, entities);
	}

};

}
