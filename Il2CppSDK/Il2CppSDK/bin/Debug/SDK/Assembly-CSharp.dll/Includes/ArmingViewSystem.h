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
	template <typename T = ICommonUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _isArena() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = LoopSoundContainer*> T& _loopSound() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = ICollector1GameEntity*>*> T GetTrigger(IContext1GameEntity*>* context) {
		return ((T (*)(ArmingViewSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x1A587EC))(this, context);
	}
	template <typename T = bool> T Filter(GameEntity* entity) {
		return ((T (*)(ArmingViewSystem*, GameEntity*))(Il2CppBase() + 0x1A587F4))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<GameEntity*>* entities) {
		return ((T (*)(ArmingViewSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x1A58810))(this, entities);
	}

};

