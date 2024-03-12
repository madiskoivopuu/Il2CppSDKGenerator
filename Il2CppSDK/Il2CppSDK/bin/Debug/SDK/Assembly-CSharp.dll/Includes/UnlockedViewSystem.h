#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnlockedViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnlockedViewSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(UnlockedViewSystem*, void*))(Il2CppBase() + 0x153B328))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(UnlockedViewSystem*, uintptr_t))(Il2CppBase() + 0x153B3F4))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(UnlockedViewSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x153B410))(this, entities);
	}

};

}
