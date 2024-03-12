#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArmingViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArmingViewSystem"));
	}

	template <typename T = int32_t> T& _index() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _isArena() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _loopSound() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(ArmingViewSystem*, void*))(Il2CppBase() + 0x1A587EC))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(ArmingViewSystem*, uintptr_t))(Il2CppBase() + 0x1A587F4))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(ArmingViewSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1A58810))(this, entities);
	}

};

}
