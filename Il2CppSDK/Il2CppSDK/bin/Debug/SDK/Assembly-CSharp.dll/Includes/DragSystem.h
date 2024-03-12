#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DragSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DragSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(DragSystem*, void*))(Il2CppBase() + 0x1305458))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(DragSystem*, uintptr_t))(Il2CppBase() + 0x130557C))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(DragSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1305598))(this, entities);
	}

};

}
