#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetupVisibilityViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetupVisibilityViewSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(SetupVisibilityViewSystem*, void*))(Il2CppBase() + 0x162F344))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(SetupVisibilityViewSystem*, uintptr_t))(Il2CppBase() + 0x162F39C))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(SetupVisibilityViewSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x162F3B8))(this, entities);
	}

};

}
