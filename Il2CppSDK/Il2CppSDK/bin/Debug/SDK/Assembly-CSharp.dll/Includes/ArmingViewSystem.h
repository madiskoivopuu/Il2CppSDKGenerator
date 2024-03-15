#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArmingViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArmingViewSystem"));
	}

	template <typename R = int32_t> R& _index() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = ICommonUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& _isArena() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = LoopSoundContainer*> R& _loopSound() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	 ICollector1<GameEntity*>* GetTrigger(IContext1<GameEntity*>* context) {
		return ((ICollector1<GameEntity*>* (*)(ArmingViewSystem*, IContext1<GameEntity*>*))(Il2CppBase() + 0x1A587EC))(this, context);
	}
	template <typename R = bool> R Filter(GameEntity* entity) {
		return ((R (*)(ArmingViewSystem*, GameEntity*))(Il2CppBase() + 0x1A587F4))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<GameEntity*>* entities) {
		return ((R (*)(ArmingViewSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x1A58810))(this, entities);
	}

};

