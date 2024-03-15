#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GenderViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GenderViewSystem"));
	}

	template <typename R = ICommonUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& _isArena() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = LoopSoundContainer*> R& _loopSound() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	 ICollector1GameEntity*>* GetTrigger(IContext1GameEntity*>* context) {
		return ((ICollector1GameEntity*>* (*)(GenderViewSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x176E840))(this, context);
	}
	template <typename R = bool> R Filter(GameEntity* entity) {
		return ((R (*)(GenderViewSystem*, GameEntity*))(Il2CppBase() + 0x176E848))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<GameEntity*>* entities) {
		return ((R (*)(GenderViewSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x176E864))(this, entities);
	}

};

