#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnContactChangeSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnContactChangeSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(OnContactChangeSystem*, void*))(Il2CppBase() + 0x11DC310))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(OnContactChangeSystem*, uintptr_t))(Il2CppBase() + 0x11DC494))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(OnContactChangeSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x11DC4C0))(this, entities);
	}

};

}
