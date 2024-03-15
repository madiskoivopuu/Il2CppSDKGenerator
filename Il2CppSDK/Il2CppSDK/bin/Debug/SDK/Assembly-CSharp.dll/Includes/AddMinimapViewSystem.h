#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddMinimapViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AddMinimapViewSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1GameEntity*>* GetTrigger(IContext1GameEntity*>* context) {
		return ((ICollector1GameEntity*>* (*)(AddMinimapViewSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x18AF6BC))(this, context);
	}
	template <typename R = bool> R Filter(GameEntity* entity) {
		return ((R (*)(AddMinimapViewSystem*, GameEntity*))(Il2CppBase() + 0x18AF7E0))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<GameEntity*>* entities) {
		return ((R (*)(AddMinimapViewSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x18AF82C))(this, entities);
	}

};

