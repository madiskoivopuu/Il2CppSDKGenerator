#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HideSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HideSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(HideSystem*, void*))(Il2CppBase() + 0x1C44180))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(HideSystem*, uintptr_t))(Il2CppBase() + 0x1C4424C))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(HideSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1C442A4))(this, entities);
	}

};

}
