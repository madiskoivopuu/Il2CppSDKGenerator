#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChestMarkerSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChestMarkerSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1<GameEntity*>* GetTrigger(IContext1<GameEntity*>* context) {
		return ((ICollector1<GameEntity*>* (*)(ChestMarkerSystem*, IContext1<GameEntity*>*))(Il2CppBase() + 0x173FD64))(this, context);
	}
	template <typename R = bool> R Filter(GameEntity* entity) {
		return ((R (*)(ChestMarkerSystem*, GameEntity*))(Il2CppBase() + 0x173FEB4))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<GameEntity*>* entities) {
		return ((R (*)(ChestMarkerSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x173FF10))(this, entities);
	}
	template <typename R = void> static R UpdateChestMarker(ArenaUnityWorld* world, GameEntity* entity, AccountEntity* ownerAccount) {
		return ((R (*)(void *, ArenaUnityWorld*, GameEntity*, AccountEntity*))(Il2CppBase() + 0x1740040))(0, world, entity, ownerAccount);
	}
	template <typename R = bool> static R ShowChestMarker(GameEntity* entity, AccountEntity* ownerAccount, ChestMarkerComponent* chestMarker) {
		return ((R (*)(void *, GameEntity*, AccountEntity*, ChestMarkerComponent*))(Il2CppBase() + 0x1740368))(0, entity, ownerAccount, chestMarker);
	}

};

