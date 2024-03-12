#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyActionEffectSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyActionEffectSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(DestroyActionEffectSystem*, void*))(Il2CppBase() + 0xEBB8FC))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t action) {
		return ((T (*)(DestroyActionEffectSystem*, uintptr_t))(Il2CppBase() + 0xEBBAB4))(this, action);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* actions) {
		return ((T (*)(DestroyActionEffectSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0xEBBAD0))(this, actions);
	}
	template <typename T = void> T TryStopStartEffect(Il2CppString* name, uintptr_t action) {
		return ((T (*)(DestroyActionEffectSystem*, Il2CppString*, uintptr_t))(Il2CppBase() + 0xEBBE1C))(this, name, action);
	}
	template <typename T = void> T TryStopApplyEffect(Il2CppString* name, uintptr_t action) {
		return ((T (*)(DestroyActionEffectSystem*, Il2CppString*, uintptr_t))(Il2CppBase() + 0xEBC050))(this, name, action);
	}

};

}
