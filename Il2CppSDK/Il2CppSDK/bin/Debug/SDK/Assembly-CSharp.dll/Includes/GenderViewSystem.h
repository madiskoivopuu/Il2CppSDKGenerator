#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GenderViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GenderViewSystem"));
	}

	template <typename T = ICommonUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& _isArena() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = LoopSoundContainer*> T& _loopSound() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = ICollector1GameEntity*>*> T GetTrigger(IContext1GameEntity*>* context) {
		return ((T (*)(GenderViewSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x176E840))(this, context);
	}
	template <typename T = bool> T Filter(GameEntity* entity) {
		return ((T (*)(GenderViewSystem*, GameEntity*))(Il2CppBase() + 0x176E848))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<GameEntity*>* entities) {
		return ((T (*)(GenderViewSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x176E864))(this, entities);
	}

};

