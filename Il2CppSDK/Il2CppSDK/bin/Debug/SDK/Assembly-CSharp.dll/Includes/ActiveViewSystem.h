#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActiveViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActiveViewSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(ActiveViewSystem*, void*))(Il2CppBase() + 0x18AE94C))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(ActiveViewSystem*, uintptr_t))(Il2CppBase() + 0x18AEA18))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(ActiveViewSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x18AEA34))(this, entities);
	}

};

}
