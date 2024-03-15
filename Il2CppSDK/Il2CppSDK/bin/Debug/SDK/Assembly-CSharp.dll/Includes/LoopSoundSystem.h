#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoopSoundSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoopSoundSystem"));
	}

	 Il2CppDictionary<GameEntity*, int32_t>*& _playingLoops() {
		return *(Il2CppDictionary<GameEntity*, int32_t>**)((uintptr_t)this + 0x28);
	}

	 ICollector1<GameEntity*>* GetTrigger(IContext1<GameEntity*>* context) {
		return ((ICollector1<GameEntity*>* (*)(LoopSoundSystem*, IContext1<GameEntity*>*))(Il2CppBase() + 0x1733394))(this, context);
	}
	template <typename R = bool> R Filter(GameEntity* entity) {
		return ((R (*)(LoopSoundSystem*, GameEntity*))(Il2CppBase() + 0x1733460))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<GameEntity*>* entities) {
		return ((R (*)(LoopSoundSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x1733468))(this, entities);
	}

};

