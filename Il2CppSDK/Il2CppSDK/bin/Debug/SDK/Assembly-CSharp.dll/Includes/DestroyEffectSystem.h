#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyEffectSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyEffectSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(DestroyEffectSystem*, void*))(Il2CppBase() + 0xEBCAB0))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t effect) {
		return ((T (*)(DestroyEffectSystem*, uintptr_t))(Il2CppBase() + 0xEBCB7C))(this, effect);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* effects) {
		return ((T (*)(DestroyEffectSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0xEBCB98))(this, effects);
	}

};

}
