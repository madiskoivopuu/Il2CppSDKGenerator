#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientWorkerUpdateBawlSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientWorkerUpdateBawlSystem"));
	}

	template <typename R = ArenaClientWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1GameEntity*>* GetTrigger(IContext1GameEntity*>* context) {
		return ((ICollector1GameEntity*>* (*)(ClientWorkerUpdateBawlSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0xE22038))(this, context);
	}
	template <typename R = bool> R Filter(GameEntity* entity) {
		return ((R (*)(ClientWorkerUpdateBawlSystem*, GameEntity*))(Il2CppBase() + 0xE22090))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<GameEntity*>* entities) {
		return ((R (*)(ClientWorkerUpdateBawlSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0xE220AC))(this, entities);
	}

};

