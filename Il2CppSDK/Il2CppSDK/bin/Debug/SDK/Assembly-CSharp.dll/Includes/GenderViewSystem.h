#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GenderViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GenderViewSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& _isArena() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _loopSound() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(GenderViewSystem*, void*))(Il2CppBase() + 0x176E840))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(GenderViewSystem*, uintptr_t))(Il2CppBase() + 0x176E848))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(GenderViewSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x176E864))(this, entities);
	}

};

}
