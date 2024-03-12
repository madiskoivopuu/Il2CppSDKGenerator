#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StateLock
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StateLock"));
	}

	template <typename T = float> T& setAttackExitDelayTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& _exitDelayTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T OnStateEnter(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(StateLock*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x148ED40))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T OnStateUpdate(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(StateLock*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x148ED9C))(this, animator, stateInfo, layerIndex);
	}

};

}
