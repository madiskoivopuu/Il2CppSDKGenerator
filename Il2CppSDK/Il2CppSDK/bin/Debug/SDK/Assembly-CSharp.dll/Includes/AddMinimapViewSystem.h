#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddMinimapViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AddMinimapViewSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1GameEntity*>*> T GetTrigger(IContext1GameEntity*>* context) {
		return ((T (*)(AddMinimapViewSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x18AF6BC))(this, context);
	}
	template <typename T = bool> T Filter(GameEntity* entity) {
		return ((T (*)(AddMinimapViewSystem*, GameEntity*))(Il2CppBase() + 0x18AF7E0))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<GameEntity*>* entities) {
		return ((T (*)(AddMinimapViewSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x18AF82C))(this, entities);
	}

};

