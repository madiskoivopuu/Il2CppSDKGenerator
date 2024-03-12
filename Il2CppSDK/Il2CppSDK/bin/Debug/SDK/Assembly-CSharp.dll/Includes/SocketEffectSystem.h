#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SocketEffectSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SocketEffectSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(SocketEffectSystem*, void*))(Il2CppBase() + 0x1484B8C))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t effect) {
		return ((T (*)(SocketEffectSystem*, uintptr_t))(Il2CppBase() + 0x1484C58))(this, effect);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* effects) {
		return ((T (*)(SocketEffectSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1484CC8))(this, effects);
	}

};

}
