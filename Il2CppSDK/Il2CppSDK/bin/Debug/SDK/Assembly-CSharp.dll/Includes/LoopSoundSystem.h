#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoopSoundSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoopSoundSystem"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& _playingLoops() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(LoopSoundSystem*, void*))(Il2CppBase() + 0x1733394))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(LoopSoundSystem*, uintptr_t))(Il2CppBase() + 0x1733460))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(LoopSoundSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1733468))(this, entities);
	}

};

}
