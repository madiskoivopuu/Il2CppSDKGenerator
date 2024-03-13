#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoopSoundSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoopSoundSystem"));
	}

	template <typename T = Il2CppDictionary<GameEntity*, int32_t>*> T& _playingLoops() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1GameEntity*>*> T GetTrigger(IContext1GameEntity*>* context) {
		return ((T (*)(LoopSoundSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x1733394))(this, context);
	}
	template <typename T = bool> T Filter(GameEntity* entity) {
		return ((T (*)(LoopSoundSystem*, GameEntity*))(Il2CppBase() + 0x1733460))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<GameEntity*>* entities) {
		return ((T (*)(LoopSoundSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x1733468))(this, entities);
	}

};

