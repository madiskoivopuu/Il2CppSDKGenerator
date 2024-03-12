#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MinimapHideSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MinimapHideSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(MinimapHideSystem*, void*))(Il2CppBase() + 0x12D31B0))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(MinimapHideSystem*, uintptr_t))(Il2CppBase() + 0x12D327C))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(MinimapHideSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x12D3298))(this, entities);
	}

};

}
